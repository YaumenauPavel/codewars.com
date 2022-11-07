accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

### Examples

```cpp
    "This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"
```

### Solution

```cpp
std::string reverse_words(std::string str)
{
  return "";
}
```

### Sample Tests

```cpp
Describe(Tests)
{
  It(Sample_Test_Cases)
  {
    Assert::That(reverse_words("The quick brown fox jumps over the lazy dog."), Equals("ehT kciuq nworb xof spmuj revo eht yzal .god"));
    Assert::That(reverse_words("apple"), Equals("elppa"));
    Assert::That(reverse_words("a b c d"), Equals("a b c d"));
    Assert::That(reverse_words("double  spaced  words"), Equals("elbuod  decaps  sdrow"));
    Assert::That(reverse_words(" Test with a leading space"), Equals(" tseT htiw a gnidael ecaps"));
    Assert::That(reverse_words("Test with a trailing space "), Equals("tseT htiw a gniliart ecaps "));
    Assert::That(reverse_words(""), Equals(""));
    Assert::That(reverse_words("ab   ba   cd"), Equals("ba   ab   dc"));
  }
};
```