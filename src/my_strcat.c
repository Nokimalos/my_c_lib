/*
** my_lib
** File description:
** my_strcat
*/

#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    if (src == NULL || dest == NULL)
        return NULL;
    for (; dest[i] != '\0'; ++i);
    for (; dest[j] != '\0'; ++j)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}