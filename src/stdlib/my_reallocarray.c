/*
** File description:
** my_reallocarray
*/

#include "libstdlib.h"
#include <stdlib.h>
#include <stdint.h>

void *my_reallocarray(void *ptr, size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        if (ptr != NULL)
            free(ptr);
        return NULL;
    if (nmemb > 0 && SIZE_MAX / nmemb < size)
        return NULL;
    size_t new_size = nmemb * size;

    return my_realloc(ptr, new_size);
}