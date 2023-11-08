#include "DNASequence.hpp"
#include "ProteinSequence.hpp"
#include <vector>
#include <memory>

int main() {
    using namespace Bioinformatics;

    std::vector<std::unique_ptr<GeneticSequence>> sequences;

    sequences.push_back(std::make_unique<DNASequence>("ATCGATCG"));
    sequences.push_back(std::make_unique<ProteinSequence>("MELKALGP"));

    for (const auto& seq : sequences) {
        seq->analyze();
    }

    return 0;
}
