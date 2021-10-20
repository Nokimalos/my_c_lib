/*
** test_my_strupcase.c
** File description:
** test_my_strupcase
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_strupcase, upper)
{
    char str[] = "hello";

    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, uppernumber)
{
    char str[] = "hello world 8";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD 8");
}

Test(my_strupcase, upperwithup)
{
    char str[] = "HELLO world";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD");
}
