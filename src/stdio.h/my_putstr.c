/*
** my_lib
** File description:
** my_putstr
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; ++i);
    return i;
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}