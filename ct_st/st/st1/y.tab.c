#ifndef lint
static char const 
yyrcsid[] = "$FreeBSD: src/usr.bin/yacc/skeleton.c,v 1.28 2000/01/17 02:04:06 bde Exp $";
#endif
#include <stdlib.h>
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING() (yyerrflag!=0)
static int yygrowstack();
#define YYPREFIX "yy"
#line 2 "st.y"
#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 1
#line 21 "y.tab.c"
#define YYERRCODE 256
#define IDENTIFIER 257
#define STRUCT 258
#define UNION 259
#define SEMICOLON 260
#define CR 261
#define OTHERS 262
#define COMMENT 263
#define TYPE_SPECIFIER 264
#define TYPE_QUALIFIER 265
#define COMMA 266
#define L_BRACE 267
#define R_BRACE 268
#define L_BRACKET 269
#define R_BRACKET 270
#define L_PAREN 271
#define R_PAREN 272
#define ASTERISK 273
const short yylhs[] = {                                        -1,
    0,    0,    0,    1,    1,    1,    4,    4,    5,    5,
    6,    7,    7,    7,    7,    9,    9,    8,   10,   10,
   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,    2,    3,    3,    3,    3,    3,    3,
    3,    3,
};
const short yylen[] = {                                         2,
    1,    1,    1,    2,    5,    4,    1,    1,    1,    2,
    3,    1,    2,    1,    2,    1,    1,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,
};
const short yydefred[] = {                                      0,
   36,    0,    0,   41,   42,   35,   34,   39,   40,    0,
    1,    2,    3,    0,    0,    0,    0,    7,    8,   16,
    0,   17,    0,    9,    0,    0,    0,   15,    6,   10,
   21,   24,   25,   26,   27,   28,   29,   30,   22,   23,
   31,   32,   33,    0,   18,    0,   13,    5,   11,   20,
};
const short yydgoto[] = {                                      10,
   22,   12,   13,   14,   23,   24,   25,   44,   26,   45,
   46,
};
const short yysindex[] = {                                   -194,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -257, -263, -256, -256,    0,    0,    0,
 -256,    0, -188,    0, -245, -256, -180,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -255,    0, -245,    0,    0,    0,    0,
};
const short yyrindex[] = {                                      0,
    0,   11,   13,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,
 -228,    0,    0,    0,    0, -211,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
const short yygindex[] = {                                      0,
    6,    0,    0,    0,  -10,   14,    4,    0,    0,  -32,
    0,
};
#define YYTABLESIZE 280
const short yytable[] = {                                      15,
    4,   18,   19,   17,   49,   11,   27,   20,   21,   16,
   37,   31,   38,   50,   32,   33,   34,   35,   36,   37,
   38,   39,   40,    0,   28,   41,   42,   43,   14,   47,
    0,   14,   14,   14,   14,    0,   30,   14,   14,   14,
   30,    0,   14,   14,   14,   12,    0,    0,   12,   12,
   12,   12,    0,    0,   12,   12,   12,    0,    0,   12,
   12,   12,    1,    2,    3,    4,    5,    6,    7,   18,
   19,    0,    8,    9,    0,   20,   21,   18,   19,   29,
    0,    0,    0,   20,   21,    0,    0,   48,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    7,    4,    8,
    0,    4,    4,    4,    0,    0,    0,    7,    0,    8,
};
const short yycheck[] = {                                     257,
    0,  258,  259,  267,  260,    0,   17,  264,  265,  267,
    0,  257,    0,   46,  260,  261,  262,  263,  264,  265,
  266,  267,  268,   -1,   21,  271,  272,  273,  257,   26,
   -1,  260,  261,  262,  263,   -1,   23,  266,  267,  268,
   27,   -1,  271,  272,  273,  257,   -1,   -1,  260,  261,
  262,  263,   -1,   -1,  266,  267,  268,   -1,   -1,  271,
  272,  273,  257,  258,  259,  260,  261,  262,  263,  258,
  259,   -1,  267,  268,   -1,  264,  265,  258,  259,  268,
   -1,   -1,   -1,  264,  265,   -1,   -1,  268,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,  262,  263,  264,  265,  266,  257,  268,  257,
   -1,  271,  272,  273,   -1,   -1,   -1,  267,   -1,  267,
};
#define YYFINAL 10
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#if YYDEBUG
const char * const yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","STRUCT","UNION",
"SEMICOLON","CR","OTHERS","COMMENT","TYPE_SPECIFIER","TYPE_QUALIFIER","COMMA",
"L_BRACE","R_BRACE","L_BRACKET","R_BRACKET","L_PAREN","R_PAREN","ASTERISK",
};
const char * const yyrule[] = {
"$accept : term",
"term : struct_or_union_specifier",
"term : comment",
"term : others",
"struct_or_union_specifier : struct_or_union IDENTIFIER",
"struct_or_union_specifier : struct_or_union IDENTIFIER L_BRACE struct_declaration_list R_BRACE",
"struct_or_union_specifier : struct_or_union L_BRACE struct_declaration_list R_BRACE",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : specifier_qualifier_list struct_declarator_list SEMICOLON",
"specifier_qualifier_list : type_specifier_a",
"specifier_qualifier_list : type_specifier_a specifier_qualifier_list",
"specifier_qualifier_list : TYPE_QUALIFIER",
"specifier_qualifier_list : TYPE_QUALIFIER specifier_qualifier_list",
"type_specifier_a : TYPE_SPECIFIER",
"type_specifier_a : struct_or_union_specifier",
"struct_declarator_list : other_declarator_list",
"other_declarator_list : other_declarator",
"other_declarator_list : other_declarator other_declarator_list",
"other_declarator : IDENTIFIER",
"other_declarator : L_BRACE",
"other_declarator : R_BRACE",
"other_declarator : SEMICOLON",
"other_declarator : CR",
"other_declarator : OTHERS",
"other_declarator : COMMENT",
"other_declarator : TYPE_SPECIFIER",
"other_declarator : TYPE_QUALIFIER",
"other_declarator : COMMA",
"other_declarator : L_PAREN",
"other_declarator : R_PAREN",
"other_declarator : ASTERISK",
"comment : COMMENT",
"others : OTHERS",
"others : IDENTIFIER",
"others : STRUCT",
"others : UNION",
"others : L_BRACE",
"others : R_BRACE",
"others : SEMICOLON",
"others : CR",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH 10000
#endif
#endif
#define YYINITSTACKSIZE 200
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short *yyss;
short *yysslim;
YYSTYPE *yyvs;
int yystacksize;
#line 96 "st.y"
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
#line 261 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack()
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;
    i = yyssp - yyss;
    newss = yyss ? (short *)realloc(yyss, newsize * sizeof *newss) :
      (short *)malloc(newsize * sizeof *newss);
    if (newss == NULL)
        return -1;
    yyss = newss;
    yyssp = newss + i;
    newvs = yyvs ? (YYSTYPE *)realloc(yyvs, newsize * sizeof *newvs) :
      (YYSTYPE *)malloc(newsize * sizeof *newvs);
    if (newvs == NULL)
        return -1;
    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab

#ifndef YYPARSE_PARAM
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG void
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif	/* ANSI-C/C++ */
#else	/* YYPARSE_PARAM */
#ifndef YYPARSE_PARAM_TYPE
#define YYPARSE_PARAM_TYPE void *
#endif
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG YYPARSE_PARAM_TYPE YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL YYPARSE_PARAM_TYPE YYPARSE_PARAM;
#endif	/* ANSI-C/C++ */
#endif	/* ! YYPARSE_PARAM */

int
yyparse (YYPARSE_PARAM_ARG)
    YYPARSE_PARAM_DECL
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate])) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#if defined(lint) || defined(__GNUC__)
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#if defined(lint) || defined(__GNUC__)
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 4:
#line 19 "st.y"
{
	    printf ("test_struct found\n");
    }
break;
case 5:
#line 23 "st.y"
{
	    printf("struct found\n");
    }
break;
case 34:
#line 81 "st.y"
{
    }
break;
#line 473 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
