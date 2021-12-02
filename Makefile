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
			src/ctype/my_isxdigit.c		\
			src/ctype/my_isblank.c		\
			src/ctype/my_ispunct.c		\
			src/ctype/my_isgraph.c		\
			src/ctype/my_iscntrl.c		\
			src/string/my_strcmp.c 		\
			src/string/my_strlowcase.c 		\
			src/string/my_strupcase.c		\
			src/string/my_memset.c		\
			src/string/my_memchr.c		\
			src/string/my_memcpy.c		\
			src/string/my_memccpy.c 	\
			src/string/my_strcpy.c		\
			src/string/my_memcmp.c		\
			src/string/my_memmove.c		\
			src/string/my_strchr.c		\
			src/my_squareroot.c		\
			src/string/my_strlen.c 		\
			src/my_factrec.c		\
			src/my_printf/my_bflag.c	\
			src/my_printf/my_xflag.c	\
			src/my_printf/my_higher_xflag.c	\
			src/my_printf/my_oflag.c	\
			src/my_printf/my_pflag.c	\
			src/my_printf/my_printf.c	\
			src/my_printf/my_uflag.c		\
			src/my_printf/utils.c		\
			src/string/my_strcat.c

SRC_TEST	=	tests/test_my_put_nbr.c			\
			tests/test_my_squareroot.c		\
			tests/test_my_factrec.c			\
			tests/test_ctype_functions.c	\
			tests/test_my_printf.c			\
			tests/test_string_functions.c

OBJ		=	$(SRC:.c=.o)

CPPFLAGS	= 	-I include/

CFLAGS		=	 -g3 -lm

TFLAGS		=	-lcriterion --coverage

HTMLFLAGS	=	gcovr . --html-details --html -o covr.html --exclude tests/

tests_run: $(OBJ)
	$(CC) -o $(TESTNAME) $(SRC) $(SRC_TEST) $(CPPFLAGS) $(CFLAGS) $(TFLAGS)
	-./$(TESTNAME) && $(HTMLFLAGS)

clean:
	$(RM) *.o $(RM) src/*.o $(RM) src/ctype/*.o $(RM) src/string/*.o $(RM) src/my_printf/*.o $(RM) *~ $(RM) *.html $(RM) *.gcda $(RM) *.gcno $(RM) $(TESTNAME)

fclean: clean
	$(RM) $(TEST_NAME)

re:	fclean tests_run

.PHONY: all clean fclean re tests_run
