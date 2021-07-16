/*
** my_putchar.c
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdio.h>

/*____LIB____*/

int kputchar(char c)
{
    return (putc(c, stdout));
}

/*____LIB____*/

void kputchar(char c)
{
    write(1, &c, 1);
}
