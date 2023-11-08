#include "DNASequence.hpp"
#include <iostream>

namespace Bioinformatics {

    DNASequence::DNASequence(std::string&& seq) : sequence(std::move(seq)) {
        std::cout << "DNASequence Move Constructor Called" << std::endl;
    }

    void DNASequence::analyze() const {
        std::cout << "Analyzing DNA sequence: " << sequence << std::endl;
    }

}
