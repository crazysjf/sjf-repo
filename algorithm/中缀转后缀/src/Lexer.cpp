/*
 * Lexer.cpp
 *
 *  Created on: 2011-2-26
 *      Author: Administrator
 */

#include "Lexer.h"

//Lexer::Lexer() {
//	// TODO Auto-generated constructor stub
//
//}

int Lexer::lexan()
{
	int c;

	while(1) {
		c = getChar();
		while (c == ' ' || c == '\t')
			c = getChar(); // Remove spaces

		if (isDigit(c)) {
			while(isDigit(c = getChar())) {
			// DO something
			}
			ungetChar();

			return NUM;
		}

		if (c == '_' || isAlpha(c)) {
			c = getChar();
			while(c == '_' || isAlpha(str[current]) || isDigit(str[current])) {
				c = getChar();
			}
			ungetChar();

			return ID;
		}

		switch(c) {
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '(':
		case ')':
			return c;
		}
		if (c == NONE)
			return NONE;
		cout << endl << c << endl;
		error();
	}
}

Lexer::~Lexer() {
	// TODO Auto-generated destructor stub
}
