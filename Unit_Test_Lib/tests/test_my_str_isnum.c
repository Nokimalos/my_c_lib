/*
** test_my_str_isnum.c
** File description:
** test_my_str_isnum
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_str_isnum, space)
{
    char str[] = "9 0";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_str_isnum, alpha)
{
    char str[] = "adkf90";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_str_isnum, number)
{
    char str[] = "139123912";

    cr_assert_eq(my_str_isnum(str), 1);
}
