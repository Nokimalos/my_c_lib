/*
** File description:
** test_stdlib_functions
*/

#include "libstring.h"
#include "libstdlib.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <criterion/criterion.h>

Test(my_calloc, callocation)
{
    int *tab = (int *)my_calloc(10, sizeof(int));

    cr_assert(tab != NULL);
    free(tab);
}

Test(my_calloc, nmemb_and_size_zero)
{
    int *tab = (int *)my_calloc(0, 0);
    cr_assert(tab != NULL);
    free(tab);
}

Test(my_calloc, size_zero)
{
    int *tab = (int *)my_calloc(10, 0);
    cr_assert(tab != NULL);
    free(tab);
}

Test(my_calloc, non_zero_allocation)
{
    int *tab = (int *)my_calloc(10, sizeof(int));
    cr_assert(tab != NULL);
    for (int i = 0; i < 10; ++i) {
        cr_assert(tab[i] == 0);
    }
    free(tab);
}

Test(my_calloc, allocation_failure)
{
    size_t nmemb = SIZE_MAX / sizeof(int);
    int *tab = (int *)my_calloc(nmemb, sizeof(int));
    cr_assert_null(tab);
}