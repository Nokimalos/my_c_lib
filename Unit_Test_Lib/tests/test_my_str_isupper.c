/*
** test_my_str_isupper.c
** File description:
** test_my_str_isupper
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_str_isupper, lower)
{
    char str[] = "hello";

    cr_assert_eq(my_str_isupper(str), 0);
}

Test(my_str_isupper, lower_space)
{
    char str[] = "hello world";

    cr_assert_eq(my_str_isupper(str), 0);
}

Test(my_str_isupper, upper_space)
{
    char str[] = "HELLO WORLD";

    cr_assert_eq(my_str_isupper(str), 0);
}

Test(my_str_isupper, upper)
{
    char str[] = "HELLOWORLD";

    cr_assert_eq(my_str_isupper(str), 1);
}
