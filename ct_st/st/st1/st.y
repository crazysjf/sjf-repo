%{
#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 1
%}

%token IDENTIFIER STRUCT UNION  SEMICOLON CR OTHERS COMMENT TYPE_SPECIFIER TYPE_QUALIFIER
%token COMMA
%token L_BRACE R_BRACE L_BRACKET R_BRACKET L_PAREN R_PAREN ASTERISK
%%

term
    : struct_or_union_specifier
    | comment
    | others
    ;

struct_or_union_specifier
    : struct_or_union IDENTIFIER
    {
	    printf ("test_struct found\n");
    }
    | struct_or_union IDENTIFIER L_BRACE struct_declaration_list R_BRACE
    {
	    printf("struct found\n");
    }
    | struct_or_union L_BRACE struct_declaration_list R_BRACE
    ;

struct_or_union
    : STRUCT
    | UNION
    ;

struct_declaration_list
    : struct_declaration
    | struct_declaration_list struct_declaration
    ;

struct_declaration
    : specifier_qualifier_list struct_declarator_list SEMICOLON
    ;

specifier_qualifier_list
    : type_specifier_a
    | type_specifier_a specifier_qualifier_list
    | TYPE_QUALIFIER
    | TYPE_QUALIFIER specifier_qualifier_list
    ;

type_specifier_a
    : TYPE_SPECIFIER
    | struct_or_union_specifier
    ;

struct_declarator_list
    : other_declarator_list
    ;

other_declarator_list
    : other_declarator
    | other_declarator other_declarator_list
    ;

other_declarator
    : IDENTIFIER
    | L_BRACE
    | R_BRACE
    | SEMICOLON
    | CR
    | OTHERS
    | COMMENT
    | TYPE_SPECIFIER
    | TYPE_QUALIFIER
    | COMMA
    | L_PAREN
    | R_PAREN
    | ASTERISK
    ;

comment
    : COMMENT
    {
    }

others
    : OTHERS
    | IDENTIFIER
    | STRUCT
    | UNION
    | L_BRACE
    | R_BRACE
    | SEMICOLON
    | CR
    ;

%%
int
yyerror(char const *str)
{
    extern char *yytext;
    //fprintf(stderr, "parser error near %s\n", yytext);
    //printf("yyerror: %s\n", str);
    return 0;
}

int main(void)
{
    extern int yyparse(void);
    extern FILE *yyin;

    yyin = stdin;
    //if (yyparse()) {
    //   fprintf(stderr, "Error ! Error ! Error !\n");
    //   exit(1);
    //}
    do {
	    yyparse();
    } while (!feof(yyin));
}
