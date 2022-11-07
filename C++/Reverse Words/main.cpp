#include <iostream>
#include <algorithm>
#include <chrono>

std::string reverse_words(std::string str)
{
    auto begin = str.begin();
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if (*it == ' ')
        {
            auto end = it;
            std::reverse(begin, end);
            begin = it + 1;
        }
    }

    std::reverse(begin, str.end());
    return str;
}

int main()
{
    std::string str {
    "Complete the function that accepts a string parameter, and reverses each word in the string. "
    "All "
    "spaces in the string should be retained"
    };

    std::cout << "reverse words" << "\n";
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    // std::cout << str << "\n";
    const std::string &s = reverse_words(str);
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << s << "\n";

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(
    end - begin).count() << "[µs]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(
    end - begin).count() << "[ns]" << std::endl;

    return 0;
}
