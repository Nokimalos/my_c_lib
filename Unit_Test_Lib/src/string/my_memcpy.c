/*
** Unit_Test_Lib
** File description:
** my_memcpy
*/

#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t len)
{
    char *d_tmp = dest;

    for (const char *s_tmp = src; len--; *d_tmp++ = *s_tmp++);
    return dest;
}