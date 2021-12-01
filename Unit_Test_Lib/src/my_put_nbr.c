/*
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "libstdio.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
}
