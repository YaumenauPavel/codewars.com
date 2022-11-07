In this kata, you will get the following:


- A word(this is a the word that you should use to check for)
- A letter guess from user
- The word that you will receive is guaranteed to be 1 word, which can be both lowercase or uppercase.

You will need to create a function that will reveal the letter guesses, and it should look like this:

Hangman('E', 'everything') ==> 'e_e_______'
Thank you contributors! Also, @iwtaga, I do not know how to fix the idea so if you could help me?

###Solution

```python
def Hangman(guess, word):
    #Good luck!!!!
```

###Sample Tests
```python
from solution import Hangman
import codewars_test as test

@test.describe("hangman")
def tests():
    @test.it("should return the correct things")
    def test_second_oldest_first():
        test.assert_equals(Hangman('E', 'Hanger'), '____e_')
        test.assert_equals(Hangman('C', 'Coat'), 'c___')
        test.assert_equals(Hangman('U', 'Olive'), '_____')
```