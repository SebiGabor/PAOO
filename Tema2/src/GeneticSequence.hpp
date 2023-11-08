#ifndef GENETIC_SEQUENCE_HPP
#define GENETIC_SEQUENCE_HPP

namespace Bioinformatics {

    class GeneticSequence {
    public:
        virtual void analyze() const = 0;
        virtual ~GeneticSequence() = default;
    };

}

#endif // GENETIC_SEQUENCE_HPP
