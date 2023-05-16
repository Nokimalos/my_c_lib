/*
** File description:
** my_xflag
*/

#include <unistd.h>
#include <stdio.h>
#include "libstdio.h"

void my_put_hex_maj(int nb)
{
    int hexa = 0;

    if (nb > 2147483647)
        return;
    if (nb >= 16 && nb <= 2147483647) {
        hexa = nb % 16;
        nb = nb / 16;
        my_put_hex_maj(nb);
    }
    else if (nb >= 0 && nb <= 16) {
        hexa = nb % 16;
        nb = nb / 16;
    }
    if (hexa > 9)
        my_putchar(hexa + '7');
    else
        my_putchar(hexa + '0');
}

void my_higher_xflag(int n)
{
    my_put_hex_maj(n);
}
