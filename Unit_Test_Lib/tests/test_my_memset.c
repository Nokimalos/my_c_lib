/*
** Unit_Test_Lib
** File description:
** test_my_memset
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "lib.h"

Test(my_memset, memory_set)
{
    int array [] = { 54 };
    size_t size = sizeof( int ) * 1;

    cr_assert(my_memset(array, 0, size) == memset(array, 0, size));
}