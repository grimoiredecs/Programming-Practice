grammar BKOOL;

@lexer::header {
from lexererr import *
}

options {
    language=Python3;
}

// Program Entry
program: EOF;


// Valid Identifier
//IDENTIFIER: [a-z] [A-Z]*;
// Invalid Real Number (Standalone 'e' or invalid exponent)
//INVALID: [eE] {raise ErrorToken("Invalid scientific notation: " + self.text);};

//REAL : '0x' [0-9]+[a-z]+
	//|	'0x' [a-z]+[0-9]+
//	|	'0x' [A-Z]+[0-9]+
	//|	'0x' [0-9]+[A-Z]+;	
REAL: INTPART DECPART | INTPART DECPART? EXPPART;
fragment INTPART: [0-9]+;
fragment DECPART: '.'[0-9]+;
fragment EXPPART: ('E' | 'e')?'-'?[0-9]+;
//fragment DOT: . ;
//fragment FIRST: ([a-zA-Z]*[a-zA-Z]*[a-zA-Z]*[a-zA-Z]*[a-zA-Z]*);
//fragment LAST: [a-zA-Z]*[a-zA-Z]*[a-zA-Z]*[a-zA-Z]*[a-zA-Z]*;
//fragment STRING: '_'[A-Z a-z0-9]+'_';


// Whitespace and Underscore
WS: [ \t\r\n]+ -> skip;
UNDERSCORE: '_' -> skip;
// Generic Error Characters
ERROR_CHAR: . {raise ErrorToken(self.text)};

// Strings (Optional for Pascal-style strings)
UNCLOSE_STRING: .;
ILLEGAL_ESCAPE: .;
