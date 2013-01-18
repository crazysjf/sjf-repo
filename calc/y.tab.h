#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define DOUBLE_LITERAL 257
#define STR 258
#define ADD 259
#define SUB 260
#define MUL 261
#define DIV 262
#define CR 263
typedef union {
    int          int_value;
    double       double_value;
} YYSTYPE;
extern YYSTYPE yylval;
