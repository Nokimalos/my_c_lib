/*
** UTEST_LIB
** File description:
** test_myfacrec
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_strlen, empty_string)
{
    char str[] = "";

    cr_assert_eq(my_strlen(str), 0);
}

Test(my_strlen, check_size_of_string)
{
    char str[] = "Hello world";

    cr_assert_eq(my_strlen(str), 11);
}

Test(kstrlen, empty_string_kstrlen)
{
    char str[] = "";

    cr_assert_eq(my_strlen(str), 0);
}

Test(kstrlen, check_size_of_string_kstrlen)
{
    char str[] = "Hello world";

    cr_assert_eq(my_strlen(str), 11);
}

Test(my_kstrlen, empty_string_my_kstrlen)
{
    char str[] = "";

    cr_assert_eq(my_strlen(str), 0);
}

Test(my_kstrlen, check_size_of_string_my_kstrlen)
{
    char str[] = "Hello world";

    cr_assert_eq(my_strlen(str), 11);
}