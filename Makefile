##
## EPITECH PROJECT, 2021
## 110
## File description:
## Makefile
##

TESTNAME	=	unit_tests

CC		=	gcc

SRC		=	src/my_put_nbr.c			\
			src/my_squareroot.c			\
			src/my_factrec.c			\

OBJ		=	$(SRC:.c=.o)

SRC_CTYPE	=	$(wildcard src/ctype/*.c)
OBJ_CTYPE	=	$(SRC_CTYPE:.c=.o)

SRC_STDIO	=	$(wildcard src/stdio/*.c)
SRC_STDIO	+=	$(wildcard src/stdio/my_printf/*.c)
OBJ_STDIO	=	$(SRC_STDIO:.c=.o)

SRC_STRING	=	$(wildcard src/string/*.c)
OBJ_STRING	=	$(SRC_STRING:.c=.o)

SRC_TEST	=	tests/test_my_put_nbr.c			\
			tests/test_my_squareroot.c		\
			tests/test_my_factrec.c			\
			tests/test_ctype_functions.c		\
			tests/test_my_printf.c			\
			tests/test_string_functions.c

CPPFLAGS	= 	-I include/

CFLAGS		=	 -g3 -lm

TFLAGS		=	-lcriterion --coverage

HTMLFLAGS	=	gcovr . --html-details --html -o covr.html --exclude tests/

tests_run: $(OBJ) $(OBJ_CTYPE) $(OBJ_STDIO) $(OBJ_STRING)
	$(CC) -o $(TESTNAME) $(SRC) $(SRC_CTYPE) $(SRC_STDIO) $(SRC_STRING) $(SRC_TEST) $(CPPFLAGS) $(CFLAGS) $(TFLAGS)
	-./$(TESTNAME) && $(HTMLFLAGS)

clean:
	$(RM) *.o $(RM) src/*.o $(RM) src/ctype/*.o $(RM) src/string/*.o $(RM) src/stdio/my_printf/*.o $(RM) *~ $(RM) *.html $(RM) *.gcda $(RM) *.gcno $(RM) $(TESTNAME)

fclean: clean
	$(RM) $(TEST_NAME)

re:	fclean tests_run

.PHONY: all clean fclean re tests_run
