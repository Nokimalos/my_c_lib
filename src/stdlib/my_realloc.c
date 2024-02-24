/*
** File description:
** my_realloc
*/

#include "libstring.h"
#include <malloc.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void *my_realloc(void *ptr, size_t size)
{
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return malloc(size);
    void *new_ptr = malloc(size);
    
    if (new_ptr == NULL)
        return NULL;
    size_t old_size = malloc_usable_size(ptr);
    size_t copy_size = (old_size < size) ? old_size : size;

    my_memcpy(new_ptr, ptr, copy_size);

    free(ptr);
    return new_ptr;
}
