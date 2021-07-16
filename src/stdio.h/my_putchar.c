/*
** my_putchar.c
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdio.h>

/*____LIB____*/

int my_putchar(char c)
{
    return (putc(c, stdout));
}

/*____LIB____*/

void my_putchar(char c)
{
    write(1, &c, 1);
}
