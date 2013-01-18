/*
 * Lexer.h
 *
 *  Created on: 2011-2-26
 *      Author: Administrator
 */

#ifndef LEXER_H_
#define LEXER_H_
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

enum TYPE {
	NUM = 256,
	ID,
	NONE
};

class Lexer {
public:
	Lexer(const string input) {
		str = input;
		current = 0;
	}
	int lexan();
	virtual ~Lexer();
private:
	string str;
	unsigned int current;

	int getChar() {
		int c = str[current++];

		if (current <= str.length()) {
			return c;
		} else {
			return NONE;
		}
	}

	void ungetChar() {
		if (current > 0)
			current --;
	}

	bool isDigit(const char c) {
		if ('0' <= c && c <= '9')
			return true;
		else
			return false;
	}

	bool isAlpha(const char c) {
		if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
			return true;
		else
			return false;
	}

	void error() {
		cout << "Lexer error." << endl;
		exit(1);
	}
};

#endif /* LEXER_H_ */
