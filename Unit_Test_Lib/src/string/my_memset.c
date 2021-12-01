/*
** Unit_Test_Lib
** File description:
** my_memset
*/

#include <stddef.h>

void *my_memset(void * restrict dest, int val, size_t len)
{
    for (unsigned char *tmp = dest; len > 0; len--, *tmp++ = val);
    return dest;
}