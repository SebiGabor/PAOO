#ifndef DNA_CONVERTER_HPP
#define DNA_CONVERTER_HPP

#include <string>
#include <vector>

class DNAConverter {
public:
    static std::string fromVector(const std::vector<char>& sequence);
    static std::vector<char> toVector(const std::string& sequence);
};

#endif // DNA_CONVERTER_HPP