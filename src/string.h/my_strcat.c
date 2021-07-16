/*
** my_lib
** File description:
** my_strcat
*/

#include <stddef.h>

/*____LIB____*/

char *my_strcat(register char *dest, register const char *src)
{
    char *tmp = dest;

    for (; *dest; ++dest);
    while(*dest++ = *src++);
    return tmp;
}

/*____LIB____*/

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
