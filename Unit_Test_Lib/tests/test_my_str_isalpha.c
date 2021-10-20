/*
** tests.c
** File description:
** tests
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_str_isalpha, space)
{
    char str[] = "Hello World !";

    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(my_str_isalpha, space_and_number)
{
    char str[] = "Hello World 3";

    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(my_str_isalpha, alpha)
{
    char str [] = "HelloWorld";

    cr_assert_eq(my_str_isalpha(str), 1);
}
