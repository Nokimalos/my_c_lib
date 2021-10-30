##
## EPITECH PROJECT, 2020
## evalexpr
## File description:
## Makefile
##

SRC		=	my_put_nbr.c		\
			my_putstr.c		\
			my_putchar.c		\
			my_cflag.c		\
			my_dflag.c		\
			my_xflag.c		\
			my_higher_xflag.c	\
			my_iflag.c		\
			my_sflag.c		\
			my_oflag.c		\
			my_bflag.c		\
			my_uflag.c		\
			my_pflag.c		\
			my_printf.c

SRC_TEST 	=	tests/my_printftest.c	\
			tests/my_putnbr_test.c

OBJ		=	$(SRC:.c=.o)
OBJ_TEST	=	$(SRC_TEST:.c=.o)

NAME		=	libmy.a
TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	gcc -lcriterion --coverage -o $(TEST_NAME) $(SRC) $(SRC_TEST)
	-./$(TEST_NAME)

clean:
	$(RM) *.o  *~ *.gcda *.gcno *.html

fclean: clean
	$(RM) $(NAME)

re:	fclean all tests_run

.PHONY: all unit_tests run_tests clean fclean re
