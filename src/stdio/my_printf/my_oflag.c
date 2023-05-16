/*
** File description:
** my_oflag.c
*/

#include <unistd.h>
#include <stdio.h>
#include "libstdio.h"

void my_put_octal(int nb)
{
    int oct_res = 0;

    if (nb > 2147483647)
        return;
    if (nb >= 8 && nb <= 2147483647) {
        oct_res = nb % 8;
        nb = nb / 8;
        my_put_octal(nb);
        my_putchar(oct_res + '0');
    }
    else if (nb >= 0 && nb <= 8) {
        oct_res = nb % 8;
        nb = nb / 8;
        my_putchar(oct_res + '0');
    }
}

void my_oflag(int n)
{
    my_put_octal(n);
}
