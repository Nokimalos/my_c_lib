##
## EPITECH PROJECT, 2021
## 110
## File description:
## Makefile
##

TESTNAME	=	unit_tests

CC		=	gcc

SRC		=	src/my_put_nbr.c		\
			src/ctype/my_isalpha.c 		\
			src/ctype/my_islower.c		\
			src/ctype/my_isnum.c		\
			src/ctype/my_isupper.c		\
			src/ctype/my_isalnum.c		\
			src/ctype/my_isspace.c		\
			src/ctype/my_isprint.c		\
			src/my_strcmp.c 		\
			src/my_strlowcase.c 		\
			src/my_strupcase.c		\
			src/my_squareroot.c		\
			src/my_strlen.c 		\
			src/my_factrec.c		\
			src/my_strcat.c

SRC_TEST	=	tests/test_my_put_nbr.c			\
			tests/test_my_str_isalpha.c		\
			tests/test_my_str_isnum.c 		\
			tests/test_my_str_isupper.c 		\
			tests/test_my_strcmp.c 			\
			tests/test_my_strlowcase.c 		\
			tests/test_my_strupcase.c 		\
			tests/test_my_str_islower.c		\
			tests/test_my_squareroot.c		\
			tests/test_my_strlen.c			\
			tests/test_my_factrec.c			\
			tests/test_my_isalnum.c			\
			tests/test_my_isspace.c			\
			tests/test_my_isprint.c			\
			tests/test_my_strcat.c

OBJ		=	$(SRC:.c=.o)

CPPFLAGS	= 	-I include/

CFLAGS		=	 -g3 -lm

TFLAGS		=	-lcriterion --coverage

HTMLFLAGS	=	gcovr . --html-details --html -o covr.html --exclude tests/

tests_run: $(OBJ)
	$(CC) -o $(TESTNAME) $(SRC) $(SRC_TEST) $(CPPFLAGS) $(CFLAGS) $(TFLAGS)
	-./$(TESTNAME) && $(HTMLFLAGS)

clean:
	$(RM) *.o $(RM) src/*.o $(RM) src/ctype/*.o $(RM) *~ $(RM) *.html $(RM) *.gcda $(RM) *.gcno

fclean: clean
	$(RM) $(TEST_NAME)

re:	fclean tests_run

.PHONY: all clean fclean re tests_run
