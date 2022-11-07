#include <string>
#include <unordered_map>
#include "../Equals.hpp"

std::string DNAStrand(const std::string &dna)
{
    std::string str;

    const std::unordered_map<char, const char> map {
    {  'A', 'T'}
    , {'T', 'A'}
    , {'G', 'C'}
    , {'C', 'G'}
    };

    auto it = dna.begin();
    for (; it != dna.end(); it++)
    {
        auto it_find = map.find(*it);
        str.push_back(it_find->second);
    }

    return str;
}

int main()
{
    gtest_expect_eq(DNAStrand("AAAA"), "TTTT");
    gtest_expect_eq(DNAStrand("ATTGC"), "TAACG");
    gtest_expect_eq(DNAStrand("GTAT"), "CATA");

    return 0;
}
