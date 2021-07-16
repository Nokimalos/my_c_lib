/*
** my_lib
** File description:
** my_strcat_malloc
*/

/*
    the strcat is already malloced.
*/

#include <stdlib.h>
#include <stddef.h>

/*____LIB____*/

int kstrlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; ++i);
    return i;
}

char *kstrdup(char *src)
{
    int i = 0;
    char *p = malloc(sizeof(char) * (i + 1));

    if (p == NULL)
        return NULL;
    for (; i < my_strlen(src); ++i)
        p[i] = src[i];
    return p;
}

char *kstrcat_malloc(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(dest);
    char *temp = my_strdup(dest);

    dest = malloc(sizeof(char) * (len + my_strlen(src) + 1));
    for (int k = 0; k < len; ++k)
        dest[k] = temp[k];
    if (src == NULL || dest == NULL)
        return NULL;
    for (; dest[i] != '\0'; ++i);
    for (; src[j] != '\0'; ++j)
        dest[i + 1] = src[j];
    dest[i + j] = '\0';
    return dest;
}