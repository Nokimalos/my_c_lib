/*
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

Test(my_Isquareroot, positive_integer)
{
    int result = my_Isquareroot(9);
    cr_assert_eq(result, 3);
}

Test(my_Isquareroot, non_integer_result)
{
    int result = my_Isquareroot(8);
    cr_assert_eq(result, -1);
}

Test(my_Isquareroot, zero_input)
{
    int result = my_Isquareroot(0);
    cr_assert_eq(result, 0);
}

Test(my_Fsquareroot, positive_float)
{
    float result = my_Fsquareroot(16.0);
    cr_assert_eq(result, 4.0f, "Expected: 4.0, Result: %f", result);
}

Test(my_Fsquareroot, negative_float)
{
    float result = my_Fsquareroot(-1.0);
    cr_assert_eq(result, -1.0f, "Expected: -1.0, Result: %f", result);
}

Test(my_Fsquareroot, zero_input)
{
    float result = my_Fsquareroot(0.0);
    cr_assert_eq(result, 0.0f, "Expected: 0.0, Result: %f", result);
}

Test(my_Dsquareroot, positive_double)
{
    double result = my_Dsquareroot(25.0);
    cr_assert_eq(result, 5.0, "Expected: 5.0, Result: %lf", result);
}

Test(my_Dsquareroot, negative_double)
{
    double result = my_Dsquareroot(-1.0);
    cr_assert_eq(result, -1.0, "Expected: -1.0, Result: %lf", result);
}

Test(my_Dsquareroot, zero_input)
{
    double result = my_Dsquareroot(0.0);
    cr_assert_eq(result, 0.0, "Expected: 0.0, Result: %lf", result);
}