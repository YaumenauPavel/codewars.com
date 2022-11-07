Given the triangle of consecutive odd numbers:

```cpp
             1
          3     5
       7     9    11
    13    15    17    19
21    23    25    27    29
...
```

Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)

```
1 -->  1
2 --> 3 + 5 = 8
```

###Solution

```cpp
long long rowSumOddNumbers(unsigned n){
  //your code here
}
```

###Sample Tests

```cpp
Describe(RowSumOddNumbers){
  It(BasicTests){
    Assert::That(rowSumOddNumbers(1), Equals(1));
    Assert::That(rowSumOddNumbers(42), Equals(74088));
  }
};
```