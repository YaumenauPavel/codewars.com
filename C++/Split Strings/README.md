Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

Examples:

```
* 'abc' =>  ['ab', 'c_']
* 'abcdef' => ['ab', 'cd', 'ef']
```

### Solution

```cpp
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    return {}; // Your code here
}
```

### Sample Tests

```cpp
// TODO: Replace examples and use TDD development by writing your own tests

Describe(sample_test)
{
    It(even_length)
    {
       do_test("abcdef", {"ab", "cd", "ef"});
       do_test("HelloWorld", {"He", "ll", "oW", "or", "ld"});
    }
    It(odd_length)
    {
       do_test("abcde", {"ab", "cd", "e_"});
       do_test("LovePizza", {"Lo", "ve", "Pi", "zz", "a_"});
    }
};
```