#include "DNASequenceGenerator.hpp"
#include <random>

std::string DNASequenceGenerator::generateRandomSequence(size_t length) {
    static const char bases[] = {'A', 'T', 'C', 'G'};
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 3);

    std::string sequence;
    sequence.reserve(length);
    for (size_t i = 0; i < length; ++i) {
        sequence += bases[dis(gen)];
    }
    return sequence;
}
