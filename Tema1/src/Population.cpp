#include "Population.hpp"

Population::Population()
    : target(nullptr), targetLength(0), mutationRate(0.0), populationSize(0), population(NULL) {
}

Population::Population(const char* _target, int length, double rate, int size)
    : target(_target), targetLength(length), mutationRate(rate), populationSize(size) {
    for (int i = 0; i < populationSize; i++) {
        DNA tempDNA = DNA(targetLength);
        population.push_back(tempDNA);
    }
}

Population::Population(const char* _target, int length, double rate, const std::vector<std::string>& initialSequences)
    : target(_target), targetLength(length), mutationRate(rate) {
    for (const std::string& sequence : initialSequences) {
        DNA dna(sequence);
        population.push_back(dna);
    }
    populationSize = initialSequences.size();
}

Population::Population(const Population& other)
    : target(other.target), targetLength(other.targetLength), mutationRate(other.mutationRate), populationSize(other.populationSize) {
    for (const DNA& dna : other.population) {
        population.push_back(dna);
    }
}

Population& Population::operator=(const Population& other) {
    if (this == &other) {
        return *this;
    }

    target = other.target;
    targetLength = other.targetLength;
    mutationRate = other.mutationRate;
    populationSize = other.populationSize;

    population.clear();
    for (const DNA& dna : other.population) {
        population.push_back(dna);
    }

    return *this;
}

void Population::evaluate() {
    for (DNA& individual : population) {
        individual.calculateFitness(target);
    }
}

bool Population::isFinished() const {
    for (const DNA& individual : population) {
        if (individual.getFitness() == 1.0) {
            return true;
        }
    }
    return false;
}

DNA Population::selectParent() const {
    double randValue = static_cast<double>(rand()) / RAND_MAX;
    double sum = 0.0;
    for (const DNA& individual : population) {
        sum += individual.getFitness();
        if (randValue < sum) {
            return individual;
        }
    }
    return population.back();
}

void Population::generateNextGeneration() {
    std::vector<DNA> newPopulation(populationSize);

    for (DNA& child : newPopulation) {
        DNA parent1 = selectParent();
        DNA parent2 = selectParent();
        child = parent1.crossover(parent2);
        child.mutate(mutationRate);
    }

    population = newPopulation;
}

double Population::getBestFitness() const {
    double bestFitness = 0.0;

    for (const DNA& individual : population) {
        double currentFitness = individual.getFitness();
        if (currentFitness > bestFitness) {
            bestFitness = currentFitness;
        }
    }

    return bestFitness;
}

const char* Population::getDNAForBestFitness() const {
    const DNA* bestDNA = &population[0];
    double bestFitness = bestDNA->getFitness();

    for (size_t i = 1; i < population.size(); i++) {
        const double currentFitness = population[i].getFitness();
        if (currentFitness > bestFitness) {
            bestDNA = &population[i];
            bestFitness = currentFitness;
        }
    }

    return bestDNA->getSequence();
}

void Population::printAllData(std::ostream& output) const {
    for (const DNA& dna : population) {
        output << dna.getSequence() << " ";
    }
    output << "\n";
}
