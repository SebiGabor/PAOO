#include "Population.hpp"
#include <fstream>

int main() {
    int populationSize;
    double mutationRate;
    int choice;
    std::vector<std::string> initialSequences;
    Population population;
    std::ifstream targetFile("../src/target.txt");
    std::ofstream outputFile("../src/output.txt"); 


    // Defineste secventa target si lungimea acesteia
    if (!targetFile.is_open()) {
        std::cerr << "Failed to open the target file.\n";
        return 1;
    }
    targetFile.seekg(0, std::ios::end);
    int targetLength = targetFile.tellg();
    targetFile.seekg(0, std::ios::beg);
    char* target = new char[targetLength];
    targetFile.read(target, targetLength);
    targetFile.close();
    target[targetLength] = '\0';

    // Seteaza rata de mutatie
    std::cout << "Enter mutation rate: ";
    std::cin >> mutationRate;

    // Citeste optionea
    std::cout << "Enter '1' to use populationSize or '2' to use initialSequences: ";
    std::cin >> choice;

    if (choice == 1) {
        // Seteaza populationSize
        std::cout << "Enter populationSize: ";
        std::cin >> populationSize;
        // Creează o populatie cu target-ul, lungimea, rata de mutatie si dimensiunea populatiei
        population = Population(target, targetLength, mutationRate, populationSize);
    } else if (choice == 2) {
        std::ifstream sequenceFile("../src/sequences.txt");

        if (!sequenceFile.is_open()) {
            std::cerr << "Failed to open the sequences file.\n";
            return 1;
        }

        std::string sequence;
        while (std::getline(sequenceFile, sequence)) {
            initialSequences.push_back(sequence);
        }

        sequenceFile.close();

        // Creează o populatie cu target-ul, lungimea, rata de mutatie si secventa initiala
        population = Population(target, targetLength, mutationRate, initialSequences);
    }
    
    Population initialPopulation = population;
    int generation = 1;

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open the output file.\n";
        return 1;
    }

    do {
        population.evaluate();
        outputFile << "Generation " << generation << ", Best Fitness: " << population.getBestFitness() << "\n";
        if (!population.isFinished()) {
            generation++;
            population.generateNextGeneration();
        }
        else {
            break;
        }
    } while (true);

    outputFile << "-----------------------------------------------------------------------------\n";
    outputFile << "Initial population: \n";
    initialPopulation.printAllData(outputFile);
    outputFile << "Last population: \n";
    population.printAllData(outputFile);
    outputFile << "-----------------------------------------------------------------------------\n";
    outputFile << "Solution found in generation " << generation << ":\n";
    outputFile << "Target: " << target << "\n";
    outputFile << "Best DNA: " << population.getDNAForBestFitness() << "\n";

    outputFile.close();

    delete[] target;

    return 0;
}