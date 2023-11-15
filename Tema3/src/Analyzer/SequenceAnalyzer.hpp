#ifndef SEQUENCE_ANALYZER_HPP
#define SEQUENCE_ANALYZER_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

template<typename SequenceType, template<typename...> class PointerType>
class SequenceAnalyzer {
public:
    SequenceAnalyzer(PointerType<SequenceType> sequence1, PointerType<SequenceType> sequence2);
    void performAnalysis();

private:
    PointerType<SequenceType> seq1;
    PointerType<SequenceType> seq2;

    void alignSequences(const SequenceType& sequence1, const SequenceType& sequence2);
    double calculateSimilarityScore(const SequenceType& sequence1, const SequenceType& sequence2);
};

#include "SequenceAnalyzer.tpp"

#endif // SEQUENCE_ANALYZER_HPP
