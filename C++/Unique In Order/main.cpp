#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using VI = std::vector<int>;
using VC = std::vector<char>;

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T> &iterable)
{
    std::vector<T> res;
    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(res));
    return res;
}

std::vector<char> uniqueInOrder(const std::string &iterable)
{
    std::vector<char> res;
    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(res));
    return res;
}

template <typename T>
void show(T &&t)
{
    for (auto &&item: t)
        std::cout << item << " ";

    std::cout << "\n\n";
}

int main()
{
    auto a1 = uniqueInOrder("AAAABBBCCDAABBB"); // == {'A', 'B', 'C', 'D', 'A', 'B'}
    show(a1);

    auto a2 = uniqueInOrder("ABBCcAD"); //         == {'A', 'B', 'C', 'c', 'A', 'D'}
    show(a2);

    auto a3 = uniqueInOrder(VI {1, 2, 3, 3}); //, Equals(VI{1,2,3}));
    show(a3);

    auto a4 = uniqueInOrder(VC {'a', 'b', 'b'}); //, Equals(VC{'a','b'}));
    show(a4);

    auto a5 = uniqueInOrder("A"); //         == {'A', 'B', 'C', 'c', 'A', 'D'}
    show(a5);

    auto a6 = uniqueInOrder(VC {
    'X', 'Y', 'Z', 'Y', 'X', 'b', 'c', 'a', 'c', 'Y', 'c', 'Z', 'Y', 'Z', 'c', 'Z', 'c', 'Z', 'X', 'Y', 'b', 'Z', 'X'
    , 'Y', 'Z', 'a', 'b'
    });
    show(a6);

    auto a7 = uniqueInOrder("ccacbXXcabXaYYYbbYZbbaaXXbXXYbYX");
    show(a7);

    auto a8 = uniqueInOrder(VI {1, -4, 1, 0, 2, 4, -3, -5, 4, -1});
    show(a8);

    auto a9 = uniqueInOrder(VI {
    5, -1, 2, 4, 4, 0, 1, -1, 2, -3, -3, -2, -1, -3, 5, 5, 1, 4, -2, 2, 2, -2, 2, -2, -4, -4, -2, 2, 0, 0, 3, 2, 1, 1
    });
    show(a9);

    return 0;
}
