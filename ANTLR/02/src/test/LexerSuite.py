import unittest
from TestUtils import TestLexer

class LexerSuite(unittest.TestCase):
  
    def test_1(self):
        input = "1Ee"
        expect = "34,Error Token e"
        self.assertTrue(TestLexer.test(input, expect, 101))
    
    def test_2(self):
        input = "1.0e"
        expect = "1.0,Error Token e"
        self.assertTrue(TestLexer.test(input, expect, 102))
    
    def test_3(self):
        input = "1.0"
        expect = "1.0,<EOF>"
        self.assertTrue(TestLexer.test(input, expect, 103))
    def test_4(self):
        input = "1.0E3"
        expect = "1.0E3,<EOF>"
        self.assertTrue(TestLexer.test(input, expect, 104))

    def test_5(self):
        input = "e123"
        expect = "Error Token e"
        self.assertTrue(TestLexer.test(input, expect, 201))
    
    def test_6(self):
        input = "1.0e-12"
        expect = "1.0e-12,<EOF>"
        self.assertTrue(TestLexer.test(input, expect, 202))
    
    
    
    

