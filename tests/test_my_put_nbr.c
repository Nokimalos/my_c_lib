/*
** test_my_put_nbr.c
** File description:
** test_my_put_nbr
*/

#include "lib.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_put_nbr, little_number, .init = redirect_stdout)
{
    my_put_nbr(8);
    cr_assert_stdout_eq_str("8");
}

Test(my_put_nbr, medium_number, .init = redirect_stdout)
{
    my_put_nbr(13);
    cr_assert_stdout_eq_str("13");
}

Test(my_put_nbr, okay_number, .init = redirect_stdout)
{
    my_put_nbr(123);
    cr_assert_stdout_eq_str("123");
}

Test(my_put_nbr, big_number, .init = redirect_stdout)
{
    my_put_nbr(123456789);
    cr_assert_stdout_eq_str("123456789");
}

Test(my_putnbr, null, .init = redirect_stdout)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, negative_number, .init = redirect_stdout)
{
    my_put_nbr(-179);
    cr_assert_stdout_eq_str("-179");
}
