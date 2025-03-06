# Generated from main/bkool/parser/BKOOL.g4 by ANTLR 4.9.2
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
    from typing import TextIO
else:
    from typing.io import TextIO


from lexererr import *



def serializedATN():
    with StringIO() as buf:
        buf.write("\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\b")
        buf.write("F\b\1\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7")
        buf.write("\4\b\t\b\4\t\t\t\4\n\t\n\3\2\3\2\3\2\3\2\3\2\5\2\33\n")
        buf.write("\2\3\2\3\2\5\2\37\n\2\3\3\6\3\"\n\3\r\3\16\3#\3\4\3\4")
        buf.write("\6\4(\n\4\r\4\16\4)\3\5\3\5\5\5.\n\5\3\5\6\5\61\n\5\r")
        buf.write("\5\16\5\62\3\6\6\6\66\n\6\r\6\16\6\67\3\6\3\6\3\7\3\7")
        buf.write("\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3\n\3\n\2\2\13\3\3\5\2\7")
        buf.write("\2\t\2\13\4\r\5\17\6\21\7\23\b\3\2\5\3\2\62;\4\2GGgg\5")
        buf.write("\2\13\f\17\17\"\"\2I\2\3\3\2\2\2\2\13\3\2\2\2\2\r\3\2")
        buf.write("\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\3\36\3\2\2")
        buf.write("\2\5!\3\2\2\2\7%\3\2\2\2\t+\3\2\2\2\13\65\3\2\2\2\r;\3")
        buf.write("\2\2\2\17?\3\2\2\2\21B\3\2\2\2\23D\3\2\2\2\25\26\5\5\3")
        buf.write("\2\26\27\5\7\4\2\27\37\3\2\2\2\30\32\5\5\3\2\31\33\5\7")
        buf.write("\4\2\32\31\3\2\2\2\32\33\3\2\2\2\33\34\3\2\2\2\34\35\5")
        buf.write("\t\5\2\35\37\3\2\2\2\36\25\3\2\2\2\36\30\3\2\2\2\37\4")
        buf.write("\3\2\2\2 \"\t\2\2\2! \3\2\2\2\"#\3\2\2\2#!\3\2\2\2#$\3")
        buf.write("\2\2\2$\6\3\2\2\2%\'\7\60\2\2&(\t\2\2\2\'&\3\2\2\2()\3")
        buf.write("\2\2\2)\'\3\2\2\2)*\3\2\2\2*\b\3\2\2\2+-\t\3\2\2,.\7/")
        buf.write("\2\2-,\3\2\2\2-.\3\2\2\2.\60\3\2\2\2/\61\t\2\2\2\60/\3")
        buf.write("\2\2\2\61\62\3\2\2\2\62\60\3\2\2\2\62\63\3\2\2\2\63\n")
        buf.write("\3\2\2\2\64\66\t\4\2\2\65\64\3\2\2\2\66\67\3\2\2\2\67")
        buf.write("\65\3\2\2\2\678\3\2\2\289\3\2\2\29:\b\6\2\2:\f\3\2\2\2")
        buf.write(";<\7a\2\2<=\3\2\2\2=>\b\7\2\2>\16\3\2\2\2?@\13\2\2\2@")
        buf.write("A\b\b\3\2A\20\3\2\2\2BC\13\2\2\2C\22\3\2\2\2DE\13\2\2")
        buf.write("\2E\24\3\2\2\2\n\2\32\36#)-\62\67\4\b\2\2\3\b\2")
        return buf.getvalue()


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
        self.checkVersion("4.9.2")
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
     


