#ifndef POPULATION_HPP
#define POPULATION_HPP

#include <vector>
#include "DNA.hpp"

class Population {
private:
    std::vector<DNA> population;
    const char* target;
    int targetLength;
    int populationSize;
    double mutationRate;

public:
    // Constructor cu o secventa target, lungime, rata de mutatie si dimensiunea populatiei
    Population(const char* _target, int length, double rate, int size);

    // Constructor cu o secventa tinta, lungime, rata de mutatie si secvente initiale
    Population(const char* _target, int length, double rate, const std::vector<std::string>& initialSequences);

    // Copy constructor
    Population(const Population& other);

    // Evalueaza fitness-ul tuturor secventelor ADN din populatie
    void evaluate();

    // Verifica daca vreun ADN din populatie a atins un fitness de 1.0
    bool isFinished() const;

    // Selecteaza un parinte din populatie pe baza fitness-ului
    DNA selectParent() const;

    // Genereaza urmatoarea generatie de secvente ADN
    void generateNextGeneration();

    // Obtine cel mai bun fitness din populatie
    double getBestFitness() const;

    // Obtine secventa ADN cu cel mai bun fitness
    const char* getDNAForBestFitness() const;

    // Afiseaza toate secventele ADN din populatie
    void printAllData() const;
};

#endif
