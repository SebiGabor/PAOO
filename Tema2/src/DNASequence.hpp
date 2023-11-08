#ifndef DNA_SEQUENCE_HPP
#define DNA_SEQUENCE_HPP

#include "GeneticSequence.hpp"
#include <string>

namespace Bioinformatics {

    class DNASequence : public GeneticSequence {
    private:
        std::string sequence;

    public:
        DNASequence(std::string&& seq);

        void analyze() const override;
    };

}

#endif // DNA_SEQUENCE_HPP
