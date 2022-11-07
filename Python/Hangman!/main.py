import unittest


def Hangman(guess, word):
    str = ""
    g = guess.lower()
    for i in range(len(word)):
        c = word[i].lower()
        if g != c:
            str += "_"
        else:
            str += c
    return str


class TestStringMethods(unittest.TestCase):
    def test_lower(self):
        self.assertEqual(Hangman('E', 'Hanger'), '____e_')
        self.assertEqual(Hangman('C', 'Coat'), 'c___')
        self.assertEqual(Hangman('U', 'Olive'), '_____')


if __name__ == '__main__':
    unittest.main()
