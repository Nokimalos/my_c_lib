/*
** EPITECH PROJECT, 2020
** my_uflag.c
** File description:
** my_uflag
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_unsigned_nbr(unsigned int nb)
{
    unsigned int nb_max = 4294967295;

    if (nb < 0) {
        nb = nb_max - nb;
        my_put_unsigned_nbr(nb);
    }
    if (nb >= 10) {
        my_put_unsigned_nbr(nb / 10);
        my_put_unsigned_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
    return (0);
}

void my_uflag(int n)
{
    my_put_unsigned_nbr(n);
}
