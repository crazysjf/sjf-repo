//============================================================================
// Name        : 中缀转后缀.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 中缀转后缀程序
//               参考《编译原理》第二章
//============================================================================

#include <iostream>
#include <string>
#include "main.h"
#include "Lexer.h"

using namespace std;

int main() {

	string input;
	int token;

	cout << "Input one expression: ";
	getline(cin, input);
	Lexer lexer(input);

	token = lexer.lexan();
	while(token != NONE) {
		cout << token << " ";
		token = lexer.lexan();
	}

	return 0;
}
