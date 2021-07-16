/*
** my_strlen.c
** File description:
** my_strlen
*/

#include <string.h>
#include <stdio.h>

size_t my_strlen(const char *str)
{
    register const char *tmp = NULL;

    for (tmp = str; *tmp; ++tmp);
    return tmp - str;
}

int main(__attribute__((unused))int ac, char const * const av[])
{
    const char *str = av[1];
    size_t count = my_strlen(str);

    printf("%ld", count);
    return 0;
}
