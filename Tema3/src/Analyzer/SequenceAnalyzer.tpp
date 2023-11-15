#ifndef SEQUENCE_ANALYZER_TPP
#define SEQUENCE_ANALYZER_TPP

#include "SequenceAnalyzer.hpp"

template<typename SequenceType, template<typename...> class PointerType>
SequenceAnalyzer<SequenceType, PointerType>::SequenceAnalyzer(PointerType<SequenceType> sequence1, PointerType<SequenceType> sequence2)
    : seq1(std::move(sequence1)), seq2(std::move(sequence2)) {}

template<typename SequenceType, template<typename...> class PointerType>
void SequenceAnalyzer<SequenceType, PointerType>::performAnalysis() {
    if (seq1 && seq2) {
            alignSequences(*seq1, *seq2);
            double similarity = calculateSimilarityScore(*seq1, *seq2);
            std::cout << "Similarity Score: " << similarity << std::endl;
        } else {
            std::cerr << "Invalid input sequences\n";
        }
}

// Templated function for DNA sequence alignment
template<typename SequenceType, template<typename...> class PointerType>
void SequenceAnalyzer<SequenceType, PointerType>::alignSequences(const SequenceType& sequence1, const SequenceType& sequence2) {
    size_t n = sequence1.size();
    size_t m = sequence2.size();

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    // Initialize the DP matrix
    for (size_t i = 0; i <= n; ++i) {
        for (size_t j = 0; j <= m; ++j) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (sequence1[i - 1] == sequence2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + std::min({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] });
        }
    }

    // Perform sequence alignment based on the DP matrix (printing aligned sequences)
    size_t i = n, j = m;
    SequenceType alignedSeq1, alignedSeq2;
    while (i > 0 || j > 0) {
        if (i > 0 && j > 0 && sequence1[i - 1] == sequence2[j - 1]) {
            alignedSeq1.push_back(sequence1[i - 1]);
            alignedSeq2.push_back(sequence2[j - 1]);
            --i;
            --j;
        } else if (j > 0 && dp[i][j] == dp[i][j - 1] + 1) {
            alignedSeq1.push_back('-');
            alignedSeq2.push_back(sequence2[j - 1]);
            --j;
        } else {
            alignedSeq1.push_back(sequence1[i - 1]);
            alignedSeq2.push_back('-');
            --i;
        }
    }

    std::reverse(alignedSeq1.begin(), alignedSeq1.end());
    std::reverse(alignedSeq2.begin(), alignedSeq2.end());

    std::cout << "Aligned Sequences:\n";
    for (const auto& nucleotide : alignedSeq1) {
        std::cout << nucleotide;
    }
    std::cout << '\n';
    for (const auto& nucleotide : alignedSeq2) {
        std::cout << nucleotide;
    }
    std::cout << '\n';
}

// Templated function to calculate similarity score between sequences of different types
template<typename SequenceType, template<typename...> class PointerType>
double SequenceAnalyzer<SequenceType, PointerType>::calculateSimilarityScore(const SequenceType& sequence1, const SequenceType& sequence2) {
    size_t len = std::min(sequence1.size(), sequence2.size());
    size_t matchCount = 0;
    for (size_t i = 0; i < len; ++i) {
        if (sequence1[i] == sequence2[i]) {
            matchCount++;
        }
    }
    return static_cast<double>(matchCount) / static_cast<double>(len);
}

#endif // SEQUENCE_ANALYZER_TPP