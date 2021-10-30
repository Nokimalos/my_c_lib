/*
** EPITECH PROJECT, 2020
** my_putnbr_test.c
** File description:
** my_putnbr_test
*/

#include "../bsprintf.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_nbr(int nb);

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_put_nbr, eight, .init = redirect_stdout)
{
    my_put_nbr(8);
    cr_assert_stdout_eq_str("8");
}

Test(my_put_nbr, thirteen, .init = redirect_stdout)
{
    my_put_nbr(13);
    cr_assert_stdout_eq_str("13");
}

Test(my_put_nbr, onehundredtwentythree, .init = redirect_stdout)
{
    my_put_nbr(123);
    cr_assert_stdout_eq_str("123");
}

Test(my_put_nbr, null, .init = redirect_stdout)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, big_number, .init = redirect_stdout)
{
    my_put_nbr(123456789);
    cr_assert_stdout_eq_str("123456789");
}

Test(my_put_nbr, negativenumber, .init = redirect_stdout)
{
    my_put_nbr(-179);
    cr_assert_stdout_eq_str("-179");
}
