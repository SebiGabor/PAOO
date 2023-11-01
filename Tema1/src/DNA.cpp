#include "DNA.hpp"


DNA::DNA() : sequence(nullptr), fitness(0.0), length(0) {}

DNA::DNA(int _length) : fitness(0.0), length(_length) {
    sequence = new char[length + 1];
    initialize();
}

DNA::DNA(const std::string& _sequence) : fitness(0.0), length(_sequence.length()) {
    sequence = new char[length + 1];
    std::strcpy(sequence, _sequence.c_str());
}

DNA::DNA(const DNA& other) : fitness(other.fitness), length(other.length) {
    sequence = new char[length + 1];
    std::strcpy(sequence, other.sequence);
}

DNA& DNA::operator=(const DNA& other) {
    if (this != &other) {
        delete[] sequence;
        length = other.length;
        sequence = new char[length + 1];
        fitness = other.fitness;
        std::strcpy(sequence, other.sequence);
    }
    return *this;
}

DNA::~DNA() {
    delete[] sequence;
}

void DNA::initialize() {
    static const char bases[] = "ATCG";
    for (int i = 0; i < length; i++) {
        sequence[i] = bases[rand() % 4];
    }
    sequence[length] = '\0';
}

void DNA::calculateFitness(const char* target) {
    int score = 0;
    for (int i = 0; i < length; i++) {
        if (sequence[i] == target[i]) {
            score++;
        }
    }
    fitness = static_cast<double>(score) / length;
}

DNA DNA::crossover(const DNA& partner) const {
    DNA child(length);
    int midpoint = rand() % length;
    for (int i = 0; i < length; i++) {
        child.sequence[i] = (i < midpoint) ? sequence[i] : partner.sequence[i];
    }
    child.sequence[length] = '\0';
    return child;
}

void DNA::mutate(double mutationRate) {
    for (int i = 0; i < length; i++) {
        if (static_cast<double>(rand()) / RAND_MAX < mutationRate) {
            static const char bases[] = "ATCG";
            sequence[i] = bases[rand() % 4];
        }
    }
}

double DNA::getFitness() const {
    return fitness;
}

const char* DNA::getSequence() const {
    return sequence;
}
