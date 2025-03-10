# Generated from /Users/admin/Github/Programming-Practice/ANTLR/02/src/main/bkool/parser/BKOOL.g4 by ANTLR 4.13.1
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
    from typing import TextIO
else:
    from typing.io import TextIO


from lexererr import *


def serializedATN():
    return [
        4,0,6,70,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,
        6,7,6,2,7,7,7,2,8,7,8,1,0,1,0,1,0,1,0,1,0,3,0,25,8,0,1,0,1,0,3,0,
        29,8,0,1,1,4,1,32,8,1,11,1,12,1,33,1,2,1,2,4,2,38,8,2,11,2,12,2,
        39,1,3,3,3,43,8,3,1,3,3,3,46,8,3,1,3,4,3,49,8,3,11,3,12,3,50,1,4,
        4,4,54,8,4,11,4,12,4,55,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,
        1,7,1,8,1,8,0,0,9,1,1,3,0,5,0,7,0,9,2,11,3,13,4,15,5,17,6,1,0,3,
        1,0,48,57,2,0,69,69,101,101,3,0,9,10,13,13,32,32,74,0,1,1,0,0,0,
        0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
        1,28,1,0,0,0,3,31,1,0,0,0,5,35,1,0,0,0,7,42,1,0,0,0,9,53,1,0,0,0,
        11,59,1,0,0,0,13,63,1,0,0,0,15,66,1,0,0,0,17,68,1,0,0,0,19,20,3,
        3,1,0,20,21,3,5,2,0,21,29,1,0,0,0,22,24,3,3,1,0,23,25,3,5,2,0,24,
        23,1,0,0,0,24,25,1,0,0,0,25,26,1,0,0,0,26,27,3,7,3,0,27,29,1,0,0,
        0,28,19,1,0,0,0,28,22,1,0,0,0,29,2,1,0,0,0,30,32,7,0,0,0,31,30,1,
        0,0,0,32,33,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,4,1,0,0,0,35,
        37,5,46,0,0,36,38,7,0,0,0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,
        0,0,39,40,1,0,0,0,40,6,1,0,0,0,41,43,7,1,0,0,42,41,1,0,0,0,42,43,
        1,0,0,0,43,45,1,0,0,0,44,46,5,45,0,0,45,44,1,0,0,0,45,46,1,0,0,0,
        46,48,1,0,0,0,47,49,7,0,0,0,48,47,1,0,0,0,49,50,1,0,0,0,50,48,1,
        0,0,0,50,51,1,0,0,0,51,8,1,0,0,0,52,54,7,2,0,0,53,52,1,0,0,0,54,
        55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,57,1,0,0,0,57,58,6,4,0,
        0,58,10,1,0,0,0,59,60,5,95,0,0,60,61,1,0,0,0,61,62,6,5,0,0,62,12,
        1,0,0,0,63,64,9,0,0,0,64,65,6,6,1,0,65,14,1,0,0,0,66,67,9,0,0,0,
        67,16,1,0,0,0,68,69,9,0,0,0,69,18,1,0,0,0,9,0,24,28,33,39,42,45,
        50,55,2,6,0,0,1,6,0
    ]

class BKOOLLexer(Lexer):

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    REAL = 1
    WS = 2
    UNDERSCORE = 3
    ERROR_CHAR = 4
    UNCLOSE_STRING = 5
    ILLEGAL_ESCAPE = 6

    channelNames = [ u"DEFAULT_TOKEN_CHANNEL", u"HIDDEN" ]

    modeNames = [ "DEFAULT_MODE" ]

    literalNames = [ "<INVALID>",
            "'_'" ]

    symbolicNames = [ "<INVALID>",
            "REAL", "WS", "UNDERSCORE", "ERROR_CHAR", "UNCLOSE_STRING", 
            "ILLEGAL_ESCAPE" ]

    ruleNames = [ "REAL", "INTPART", "DECPART", "EXPPART", "WS", "UNDERSCORE", 
                  "ERROR_CHAR", "UNCLOSE_STRING", "ILLEGAL_ESCAPE" ]

    grammarFileName = "BKOOL.g4"

    def __init__(self, input=None, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.1")
        self._interp = LexerATNSimulator(self, self.atn, self.decisionsToDFA, PredictionContextCache())
        self._actions = None
        self._predicates = None


    def action(self, localctx:RuleContext, ruleIndex:int, actionIndex:int):
        if self._actions is None:
            actions = dict()
            actions[6] = self.ERROR_CHAR_action 
            self._actions = actions
        action = self._actions.get(ruleIndex, None)
        if action is not None:
            action(localctx, actionIndex)
        else:
            raise Exception("No registered action for:" + str(ruleIndex))


    def ERROR_CHAR_action(self, localctx:RuleContext , actionIndex:int):
        if actionIndex == 0:
            raise ErrorToken(self.text)
     


