/*
 * Parser.h
 *
 *  Created on: 2011-2-26
 *      Author: Administrator
 */

#ifndef PARSER_H_
#define PARSER_H_

//
// Grammar and Semantic
//   start       := expr eof
//   expr        := term moreTerms
//   moreTerms   := + term {print '+'} moreTerms |
//                  - term {print '-'} moreTerms |
//                  epsilon
//   term        := factor moreFactors
//   moreFactors := * factor {print '*'} moreFactors |
//                  / factor {print '/'} moreFactors |
//                  % factor {print '%'} moreFactors |
//                  epsilon
//   factor      := ( expr ) |
//                  ID {print id.lexeme}|
//                  NUM {print NUM.value}
//

class Parser {
public:
	Parser();
	virtual ~Parser();
};

#endif /* PARSER_H_ */
