/*
** File description:
** my_strlen
*/

#include <stddef.h>
#include <stdio.h>

/*____LIBC____*/

size_t kstrlen(const char *str)
{
    register const char *tmp = NULL;

    for (tmp = str; *tmp; ++tmp);
    return tmp - str;
}

/*____NEWLIB____*/

size_t my_kstrlen(const char *str)
{
    return (!*str) ? 0 : my_kstrlen(str + 1) + 1;
}

/*____LIB____*/

size_t my_strlen(const char *str)
{
    size_t i = 0;

    for (; str[i] != '\0'; ++i);
    return i;
}