In this Kata, you will be generating a Kolakoski sequence from a list of natural numbers.

Before we define a Kolakoski sequence, it is useful to define the concept of run-length encoding (RLE). The RLE of a
sequence is itself a sequence generated from length of runs of the same number from the original sequence. Here is an
example:

Original Sequence: [ 1, 1, 2, 2, 2, 1, 3, 3, 3, 3, 2]

Run-length encoding: [ 2, 3, 1, 4, 1 ]

A Kolakoski sequence is defined as an infinite sequence of natural numbers (excluding zero); with the property that it
is identical to it's run-length encoding.

An example:

Given the starting list [ 1, 3, 1, 2 ] we can generate the first n elements (in this example, n = 7) of the sequence.

Note: You can ONLY use the numbers from the starting list and they MUST appear in the same order (the same number can
repeat and we wrap around to the beginning of the list when we run out).

This means that in our example, the sequence MUST start with some number of 1's, followed by some number of 3's,
followed by some number of 1's, followed by some number of 2's, followed by some number of 1's (wrap around), etc.

These rules generate the sequence [ 1, 3, 3, 3, 1, 1, 1 ]. We can verify that this is indeed Kolakoski by comparing it
to the RLE of the sequence: [ 1, 3, 3 ], which shows that they are identical (so far).

Not every list of starting numbers is capable of generating a Kolakoski sequence. Since the sequence is infinite, we
will only be interested in whether or not the first n elements of the sequence are Kolakoski. Hence, we either claim
that a sequence is DEFINITELY NOT Kolakoski or is POSSIBLY Kolakoski.

Your job is to implement the following functions:

generate_kolakoski(list, n) which takes a starting list of numbers and a positive integer n and returns the first n
elements of the Kolakoski sequence generated from list.

possibly_kolakoski(seq) which takes a sequence and returns false if it is NOT Kolakoski and true if it is so far.

Have fun!

### Solution:

```cpp
#include <vector>

using Sequence = std::vector<int>;

Sequence generate_kolakoski(const Sequence list, int n) {
  return { };
}
 
bool possibly_kolakoski(const Sequence& seq) {
  return true;
}
```

### Sample Tests:

```cpp
struct Result {
  std::vector<int> start;
  size_t n;
  std::vector<int> seq;
  bool kolakoski;
};

std::vector<Result> results = {
  Result { {1, 2}, 5, {1, 2, 2, 1, 1}, true },
  Result { {2, 1}, 5, {2, 2, 1, 1, 2}, true },
};
Describe(correct_results)
{
      It(should_return_kolakoski_seq)
      {
          for (Result r : results) Assert::That(generate_kolakoski(r.start, r.n), Equals(r.seq));
      }
      It(should_return_possible_kolakoski)
      {
          for (Result r : results) Assert::That(possibly_kolakoski(r.seq), Equals(r.kolakoski));
      }
};
```
