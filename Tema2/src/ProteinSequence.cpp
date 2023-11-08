#include "ProteinSequence.hpp"
#include <iostream>

namespace Bioinformatics {

    ProteinSequence::ProteinSequence(std::string&& seq) : sequence(std::move(seq)) {
        std::cout << "ProteinSequence Move Constructor Called" << std::endl;
    }

    void ProteinSequence::analyze() const {
        std::cout << "Analyzing protein sequence: " << sequence << std::endl;
    }

}
