/*
** File description:
** test_ctype_functions
*/

#include <stddef.h>
#include <criterion/criterion.h>
#include "libctype.h"

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

Test(my_str_isalpha, with_space)
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

Test(my_str_islower, with_space_lower)
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

Test(my_isdigit, good_one)
{
    int i = '9';

    cr_assert_eq(my_isdigit(i), 1);
}

Test(my_isdigit, not_good)
{
    int i = -9;

    cr_assert_eq(my_isdigit(i), 0);
}

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

Test(my_isxdigit, is_hexadecimal)
{
    char str[] = "AFafDd096";

    cr_assert_eq(my_isxdigit(str), 1);
}

Test(my_isxdigit, is_not_hexadecimal)
{
    char str[] = "Hello World";

    cr_assert_eq(my_isxdigit(str), 0);
}

Test(my_isblank, is_blank)
{
    const char str[] = "    ";

    cr_assert_eq(my_isblank(str), 1);
}

Test(my_isblank, is_tab)
{
    const char str[] = "\t";

    cr_assert_eq(my_isblank(str), 1);
}

Test(my_isblank, is_not_blank)
{
    const char str[] = "Hello World";

    cr_assert_eq(my_isblank(str), 0);
}

Test(my_ispunct, is_space_punct)
{
    const char str[] = "  ";

    cr_assert_eq(my_ispunct(str), 0);
}

Test(my_ispunct, is_alpha_numeric_punct)
{
    const char str[] = "azAZ09";

    cr_assert_eq(my_ispunct(str), 0);
}

Test(my_ispunct, is_more_than_space)
{
    const char str[] = "!";

    cr_assert_eq(my_ispunct(str), 1);
}

Test(my_ispunct, is_more_than_nine)
{
    const char str[] = ":";

    cr_assert_eq(my_ispunct(str), 1);
}

Test(my_ispunct, is_more_than_z_higher)
{
    const char str[] = "[";

    cr_assert_eq(my_ispunct(str), 1);
}

Test(my_ispunct, is_more_than_z_lower)
{
    const char str[] = "{";

    cr_assert_eq(my_ispunct(str), 1);
}

Test(my_isgraph, is_graph)
{
    const char str[] = "!~";

    cr_assert_eq(my_isgraph(str), 1);
}

Test(my_isgraph, is_not_graph)
{
    const char str[] = "Hello World";

    cr_assert_eq(my_isgraph(str), 0);
}

Test(my_iscntrl, is_cntrl)
{
    const char str[] = "\t";

    cr_assert_eq(my_iscntrl(str), 1);
}

Test(my_iscntrl, is_cntrl_null)
{
    const char str[] = "\0";

    cr_assert_eq(my_iscntrl(str), 1);
}

Test(my_iscntrl, is_not_cntrl)
{
    const char str[] = "Hello World";

    cr_assert_eq(my_iscntrl(str), 0);
}