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

Test(my_realloc, null_pointer)
{
    int *ptr = NULL;
    int *new_ptr = (int *)my_realloc(ptr, 5 * sizeof(int));
    
    cr_assert_not_null(new_ptr);
    free(new_ptr);
}

Test(my_realloc, zero_size)
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    int *new_ptr = (int *)my_realloc(ptr, 0);
    
    cr_assert_null(new_ptr);
}

Test(my_realloc, resize)
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    int *new_ptr = (int *)my_realloc(ptr, 2 * sizeof(int));
    
    cr_assert_not_null(new_ptr);
    for (int i = 0; i < 2; ++i) {
        cr_assert_eq(new_ptr[i], i);
    }
    free(new_ptr);
}