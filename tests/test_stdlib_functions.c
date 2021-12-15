/*
** my_lib
** File description:
** test_stdlib_functions
*/

#include "libstring.h"
#include "libstdlib.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>

Test(my_calloc, callocation)
{
    int *tab = (int *)my_calloc(10, sizeof(int));

    cr_assert(tab != NULL);
}