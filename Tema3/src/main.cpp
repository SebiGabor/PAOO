#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

#include "SequenceAnalyzer.hpp"
#include "DNAConverter.hpp"
#include "DNASequenceGenerator.hpp"

int main() {
    // Using the SequenceAnalyzer class with std::string sequences using unique pointers
    auto sequence1 = std::make_unique<std::string>(DNASequenceGenerator::generateRandomSequence(10));
    auto sequence2 = std::make_unique<std::string>(DNASequenceGenerator::generateRandomSequence(10));

    SequenceAnalyzer<std::string, std::unique_ptr> sequenceAnalyzerString(std::move(sequence1), std::move(sequence2));
    std::cout << "String Sequence Alignment:\n";
    sequenceAnalyzerString.performAnalysis();

    // Using the SequenceAnalyzer class with std::vector<char> sequences using shared pointers
    auto sharedDnaVec1 = std::make_shared<std::vector<char>>(DNAConverter::toVector(DNASequenceGenerator::generateRandomSequence(10)));
    auto sharedDnaVec2 = sharedDnaVec1; // Shared ownership

    SequenceAnalyzer<std::vector<char>, std::shared_ptr> sequenceAnalyzerVector(sharedDnaVec1, sharedDnaVec2);
    std::cout << "\nVector Sequence Alignment:\n";
    sequenceAnalyzerVector.performAnalysis();

    return 0;
}