/*
** EPITECH PROJECT, 2021
** File description:
** my_memcmp
*/

#include <stddef.h>

int my_memcmp(const void *to_compare, const void *compared, size_t size)
{
    const char *to_compare_tmp = to_compare;

    for (const char *compared_tmp = compared; size != 0; size--)
        if (*(unsigned char *)to_compare_tmp++ != *(unsigned char *)compared_tmp++)
            return (*--to_compare_tmp - *--compared_tmp);
    return 0;
}