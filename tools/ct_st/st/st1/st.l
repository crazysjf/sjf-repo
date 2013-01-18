%{
#include <stdio.h>
#include "y.tab.h"

int
yywrap(void)
{
    return 1;
}
%}
%%
"void"  |
"char"  |
"short" |
"int"   |
"long" |
"float" |
"double" |
"signed" |
"unsigned " {
    return TYPE_SPECIFIER;
}

"const" |
"volatile" {
    return TYPE_QUALIFIER;
}


"{"		return L_BRACE;
"}"		return R_BRACE;
"["             return L_BRACKET;
"]"             return R_BRACKET;
"("             return L_PAREN;
")"             return R_PAREN;
"*"             return ASTERISK;
"struct"	return STRUCT;
"union"		return UNION;
"\n"		return CR;

[_a-zA-Z][_a-zA-Z0-9]* {
    return IDENTIFIER;
}

^#.*$           {
    return COMMENT;
}

.               {;}


%%
