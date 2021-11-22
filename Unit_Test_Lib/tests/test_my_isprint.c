/*
** Unit_Test_Lib
** File description:
** test_my_isprint
*/

#include "lib.h"
#include <criterion/criterion.h>

Test(my_isprint, is_printable)
{
    const char str[] = "Hello World";

    cr_assert_eq(my_isprint(str), 1);
}

Test(my_isprint, is_printable_with_special_char)
{
    const char str[] = "Hello~World";

    cr_assert_eq(my_isprint(str), 1);
}

Test(my_isprint, not_printable)
{
    const char str[] = "\n";

    cr_assert_eq(my_isprint(str), 0);
}