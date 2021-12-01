/*
** Unit_Test_Lib
** File description:
** my_memchr
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_memchr(const void *src, int search, size_t n)
{
    for (const char *s_tmp = src; n-- > 0; s_tmp++)
        if (*s_tmp == search)
            return (void *)s_tmp;
    return NULL;
}