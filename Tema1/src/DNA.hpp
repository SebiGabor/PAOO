#ifndef DNA_HPP
#define DNA_HPP

#include <iostream>
#include <cstring>
#include <cstdlib> // pentru rand()

class DNA {
private:
    char* sequence;
    double fitness;
    int length;

public:
    // Constructor implicit
    DNA();

    // Constructor cu lungime specificata
    DNA(int _length);

    // Constructor cu o secventa de ADN
    DNA(const std::string& _sequence);

    // Copy constructor
    DNA(const DNA& other);

    // Suprascriere operator de atribuire
    DNA& operator=(const DNA& other);

    // Destructor pentru eliberarea memoriei
    ~DNA();

    // Initializeaza secventa ADN cu baze aleatoarii
    void initialize();

    // Calculeaza fitness-ul secventei ADN comparand-o cu un target
    void calculateFitness(const char* target);

    // Creeaza un nou ADN combinand ADN-ul curent cu un partener
    DNA crossover(const DNA& partner) const;

    // Modifica secventa ADN cu o anumita rata de mutație
    void mutate(double mutationRate);

    // Obtine fitness-ul secventei ADN
    double getFitness() const;

    // Obtine secvența ADN
    const char* getSequence() const;
};

#endif
