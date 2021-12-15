/*
** my_lib
** File description:
** test_math_functions
*/

#include <criterion/criterion.h>
#include "libmath.h"

Test(my_factrec, good_nb)
{
    cr_assert_eq(6, my_factrec(3));
}

Test(my_factrec, invalid_nb)
{
    cr_assert_eq(0, my_factrec(13));
}

Test(my_factrec, negative_nb)
{
    cr_assert_eq(0, my_factrec(-1));
}

Test(my_factrec, zero)
{
    cr_assert_eq(1, my_factrec(0));
}

Test(my_factrec, one)
{
    cr_assert_eq(1, my_factrec(1));
}

Test(my_squareroot, good_nb)
{
    cr_assert_eq(6, my_squareroot(36));
}

Test(my_squareroot, float_nb)
{
    cr_assert_eq(-1, my_squareroot(14));
}