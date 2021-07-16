/*
** my_lib
** File description:
** my_putstr
*/

#include <unistd.h>

/*____LIB____*/

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

/*____LIB____*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        my_putchar(str[i]);
}

/*____LIB____*/

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; my_putchar(str[++i]));
}
