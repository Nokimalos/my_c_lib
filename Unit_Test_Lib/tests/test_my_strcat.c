/*
** test_my_strcat.c
** File description:
** test_my_strcat
*/

#include "lib.h"
#include <criterion/criterion.h>

char *my_strcat(register char *dest, register const char *src);

Test(my_strcat, concatenate)
{
    char dest[] = "Hello";
    char src[] = "World";

    cr_assert_str_eq(my_strcat(dest, src), "HelloWorld");
}
