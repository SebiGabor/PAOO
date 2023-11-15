#include "DNAConverter.hpp"

std::string DNAConverter::fromVector(const std::vector<char>& sequence) {
    return std::string(sequence.begin(), sequence.end());
}

std::vector<char> DNAConverter::toVector(const std::string& sequence) {
    return std::vector<char>(sequence.begin(), sequence.end());
}
