/*
** my_lib
** File description:
** my_strncat
*/

#include <stddef.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    if (src == NULL || dest == NULL || nb == NULL)
        return NULL;
    for (; dest[i] != '\0'; ++i);
    for (; j < nb; ++j)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest; 
}