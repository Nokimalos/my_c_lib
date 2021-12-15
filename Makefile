##
## EPITECH PROJECT, 2021
## 110
## File description:
## Makefile
##

TESTNAME	=	unit_tests

CC		=	gcc

SRC_CTYPE	=	$(wildcard src/ctype/*.c)
OBJ_CTYPE	=	$(SRC_CTYPE:.c=.o)

SRC_MATH	=	$(wildcard src/math/*.c)
OBJ_MATH	=	$(SRC_MATH:.c=.o)

SRC_STDIO	=	$(wildcard src/stdio/*.c)
SRC_STDIO	+=	$(wildcard src/stdio/my_printf/*.c)
OBJ_STDIO	=	$(SRC_STDIO:.c=.o)

SRC_STDLIB	=	$(wildcard src/stdlib/*.c)
OBJ_STDLIB	=	$(SRC_STDLIB:.c=.o)

SRC_STRING	=	$(wildcard src/string/*.c)
OBJ_STRING	=	$(SRC_STRING:.c=.o)

SRC_TEST	=	$(wildcard tests/*.c)
OBJ_TEST	=	$(SRC_TEST:.c=.o)

CPPFLAGS	= 	-I include/

CFLAGS		=	 -g3 -lm

TFLAGS		=	-lcriterion --coverage

HTMLFLAGS	=	gcovr . --html-details --html -o covr.html --exclude tests/

tests_run: $(OBJ_CTYPE) $(OBJ_MATH) $(OBJ_STDIO) $(OBJ_STDLIB) $(OBJ_STRING) $(OBJ_TEST)
	$(CC) -o $(TESTNAME) $(SRC_CTYPE) $(SRC_MATH) $(SRC_STDIO) $(SRC_STDLIB) $(SRC_STRING) $(SRC_TEST) $(CPPFLAGS) $(CFLAGS) $(TFLAGS)
	-./$(TESTNAME) && $(HTMLFLAGS)

cleanobjs:
	$(RM) *.o $(RM) src/*.o $(RM) src/ctype/*.o $(RM) src/math/*.o $(RM) src/string/*.o $(RM) src/stdlib/*.o $(RM) src/stdio/my_printf/*.o $(RM) tests/*.o

clean:
	$(RM) *~ $(RM) *.html $(RM) *.gcda $(RM) *.gcno $(RM) $(TESTNAME)

fclean: clean cleanobjs

re:	fclean tests_run

.PHONY: all clean fclean re tests_run
