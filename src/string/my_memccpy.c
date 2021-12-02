/*
** Unit_Test_Lib
** File description:
** my_memccpy
*/

#include <stddef.h>

void *my_memccpy(void * restrict dest, const void * restrict src, int c, size_t n)
{
    char *d_tmp = dest;
   
    if (n != 0) {
        for (const char *s_tmp = src; n != 0; --n)
            if ((*d_tmp++ = *s_tmp++) == c)
                return dest;
    }
    return NULL;
}