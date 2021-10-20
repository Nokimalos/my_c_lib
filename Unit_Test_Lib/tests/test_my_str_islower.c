/*
** test_my_str_islower.c
** File description:
** test_my_str_islower
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_str_islower, upper)
{
    char str[] = "Hello";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, upper_space)
{
    char str[] = "Hello World";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, space)
{
    char str[] = "hello world";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, upper_space_number)
{
    char str[] = "Hello world 6";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, lower)
{
    char str[] = "helloworld";

    cr_assert_eq(my_str_islower(str), 1);
}
