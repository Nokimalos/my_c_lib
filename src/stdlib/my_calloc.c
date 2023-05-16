/*
** File description:
** my_calloc
*/

#include "libstring.h"
#include <stdlib.h>

void *my_calloc(size_t nmemb, size_t size)
{
    char *ptr = NULL;

    if (nmemb == 0 || size == 0) {
        nmemb = 1;
        size = 1;
    }
    ptr = malloc(nmemb * size);
    if (!ptr)
        return NULL;
    else
        my_memset(ptr, 0, (nmemb * size));
    return ptr;
}