Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any
elements with the same value next to each other and preserving the original order of elements.

For example:

```
uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}
```

### Solution

```cpp
#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  //your code here
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  //your code here
}
```

### Sample Tests

```cpp
using VI = std::vector<int>;
using VC = std::vector<char>;

Describe(UniqueInOrder){
  It(BasicTests){
    Assert::That(uniqueInOrder(""), Equals(VC{}));
    Assert::That(uniqueInOrder("AA"), Equals(VC{'A'}));
    Assert::That(uniqueInOrder("A"), Equals(VC{'A'}));
    Assert::That(uniqueInOrder("AAAABBBCCDAABBB"), Equals(VC{'A', 'B', 'C', 'D', 'A', 'B'}));
    Assert::That(uniqueInOrder("AADD"), Equals(VC{'A', 'D'}));
    Assert::That(uniqueInOrder("AAD"), Equals(VC{'A', 'D'}));
    Assert::That(uniqueInOrder("ADD"), Equals(VC{'A', 'D'}));
    Assert::That(uniqueInOrder("ABBCcAD"), Equals(VC{'A', 'B', 'C', 'c', 'A', 'D'}));
    Assert::That(uniqueInOrder(VI{1,2,3,3}), Equals(VI{1,2,3}));
    Assert::That(uniqueInOrder(VC{'a','b','b'}), Equals(VC{'a','b'}));
  }
};
```