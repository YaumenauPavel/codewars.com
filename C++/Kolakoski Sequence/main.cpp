#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int grow(const std::vector<int> &nums)
{
    return std::accumulate(nums.begin(), nums.end(), 1, [](int sum, int next)->int
    {
        return sum * next;
    });
}

int main()
{
    std::cout << grow({1, 2, 3}) << std::endl;
    std::cout << grow({4, 1, 1, 1, 4}) << std::endl;
    std::cout << grow({2, 2, 2, 2, 2, 2}) << std::endl;

    return 0;
}