/*
** UTEST_LIB
** File description:
** test_my_squareroot
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_squareroot, good_nb)
{
    cr_assert_eq(6, my_squareroot(36));
}

Test(my_squareroot, float_nb)
{
    cr_assert_eq(-1, my_squareroot(14));
}