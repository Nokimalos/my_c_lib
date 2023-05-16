/*
** File description:
** my_bzero
*/

#include "libstring.h"

void my_bzero(void *s, size_t n)
{
    my_memset(s, 0, n);
}