#include "Population.hpp"

int main() {
    // Seteaza dimensiunea populatiei si rata de mutatie
    int populationSize = 1000;
    double mutationRate = 0.01;

    // Defineste secventa target si lungimea acesteia
    const char* target = "ATCGTGAT";
    int targetLength = std::strlen(target);
    
    // Seteaza manual secventele ADN initiale cu valorile de fitness corespunzatoare
    std::vector<std::string> initialSequences = {
        "ATCGTAGA",
        "ATCTAGCA",
        "ATGGTGCA",
        "ATCGTGAA",
    };

    // Creează o populatie cu target-ul, lungimea, rata de mutatie si dimensiunea populatiei
    Population population(target, targetLength, mutationRate, populationSize);
    Population initialPopulation = population;
    
    int generation = 1;
    do {
        population.evaluate();
        std::cout << "Generation " << generation << ", Best Fitness: " << population.getBestFitness() << "\n";
        if (!population.isFinished()) {
            generation++;
            population.generateNextGeneration();
        }
        else {
            break;
        }
    } while (true);
    
    std::cout << "-----------------------------------------------------------------------------\n";
    std::cout << "Initial population: \n";
    initialPopulation.printAllData();
    std::cout << "Last population: \n";
    population.printAllData();
    std::cout << "Solution found in generation " << generation << ":\n";
    std::cout << "Target: " << target << "\n";
    std::cout << "Best DNA: " << population.getDNAForBestFitness() << "\n";
    return 0;
}