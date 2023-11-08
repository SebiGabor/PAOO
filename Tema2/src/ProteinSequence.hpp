#ifndef PROTEIN_SEQUENCE_HPP
#define PROTEIN_SEQUENCE_HPP

#include "GeneticSequence.hpp"
#include <string>

namespace Bioinformatics {

    class ProteinSequence : public GeneticSequence {
    private:
        std::string sequence;

    public:
        ProteinSequence(std::string&& seq);

        void analyze() const override;
    };

}

#endif // PROTEIN_SEQUENCE_HPP
