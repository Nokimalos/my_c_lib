/*
** test_strlowcase.c
** File description:
** test_strlowcase
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_strlowcase, lower)
{
    char str[] = "HELLOWORLD";

    cr_assert_str_eq(my_strlowcase(str), "helloworld"); 
}

Test(my_strlowcase, lower_number)
{
    char str[] = "HELLO W8RLD";

    cr_assert_str_eq(my_strlowcase(str), "hello w8rld");
}

Test(my_strlowcase, lower_with_upper)
{
    char str[] = "hello WORLD";

    cr_assert_str_eq(my_strlowcase(str), "hello world");
}
