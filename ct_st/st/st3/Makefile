TARGET = st
YACC_S = st.y
LEX_S  = st.l
YACC_C = y.tab.c
YACC_H = y.tab.h
LEX_C  = lex.yy.c

$(TARGET): $(YACC_C) $(YACC_H) $(LEX_C)
	gcc -o $(TARGET) $(YACC_C) $(LEX_C)

$(YACC_C): $(YACC_S)
	yacc -dv $(YACC_S)

$(LEX_C): $(LEX_S)
	lex $(LEX_S)

.PHONY: clean
clean:
	rm -rf $(TARGET) $(YACC_C) $(YACC_H) $(LEX_C) *.output
