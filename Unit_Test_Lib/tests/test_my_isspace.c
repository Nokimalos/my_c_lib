/*
** test_my_isspace.c
** File description:
** test_my_isspace
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_isspace, space)
{
    const char str[] = "   ";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, tab)
{
    const char str[] = "\t";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, f)
{
    const char str[] = "\f";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, n)
{
    const char str[] = "\n";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, r)
{
    const char str[] = "\r";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, v)
{
    const char str[] = "\v";

    cr_assert_eq(my_isspace(str), 1);
}

Test(my_isspace, mix)
{
    const char str[] = "Hello World";

    cr_assert_eq(my_isspace(str), 0);
}

Test(my_isspace, alpha_numeric)
{
    const char str[] = "HelloWorld3";

    cr_assert_eq(my_isspace(str), 0);
}
