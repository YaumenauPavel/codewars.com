Given a non-empty array of integers, return the result of multiplying the values together in order.

###Example:

```
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
```

### Solution

```cpp
#include <vector>
int grow(std::vector<int> nums) {
  // your code here
}
```

### Sample Tests

```cpp
#include <vector>

using vec = std::vector<int>;

Describe(ReduceGrow) {
  It(BasicTests) {
    Assert::That(grow(vec{1, 2, 3}), Equals(6));
    Assert::That(grow(vec{4, 1, 1, 1, 4}), Equals(16));
    Assert::That(grow(vec{2, 2, 2, 2, 2, 2}), Equals(64));
  }
};
```