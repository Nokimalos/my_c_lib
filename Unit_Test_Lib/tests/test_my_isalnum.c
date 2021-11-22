/*
** test_my_isalnum.c
** File description:
** test_my_isalnum
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_isalnum, alpa_numeric)
{
    const char str[] = "HelloWorld1";

    cr_assert_eq(my_isalnum(str), 1);
}

Test(my_isalnum, just_numeric)
{
    const char str[] = "1231312321";

    cr_assert_eq(my_isalnum(str), 1);
}

Test(my_isalnum, just_alpha)
{
    const char str[] = "HelloWorld";

    cr_assert_eq(my_isalnum(str), 1);
}

Test(my_isalnum, is_lower)
{
    const char str[] = "helloworld";

    cr_assert_eq(my_isalnum(str), 1);
}

Test(my_isalnum, is_upper)
{
    const char str[] = "HELLOWORLD";

    cr_assert_eq(my_isalnum(str), 1);
}

Test(my_isalnum, alpha_numeric_with_space)
{
    const char str[] = "Hello-World ";

    cr_assert_eq(my_isalnum(str), 0);
}

Test(my_isalnum, no_one)
{
    const char str[] = "-";

    cr_assert_eq(my_isalnum(str), 0);
}
