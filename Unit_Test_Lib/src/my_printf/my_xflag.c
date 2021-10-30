/*
** EPITECH PROJECT, 2020
** my_xflag.c
** File description:
** my_xflag.c
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

void my_put_hex_min(int nb)
{
    int hexa_res = 0;

    if (nb > 2147483647)
        return;
    if (nb >= 16 && nb <= 2147483647) {
        hexa_res = nb % 16;
        nb = nb / 16;
        my_put_hex_min(nb);
    }
    else if (nb >= 0 && nb <= 16) {
        hexa_res = nb % 16;
        nb = nb / 16;
    }
    if (hexa_res > 9)
        my_putchar(hexa_res + 'W');
    else
        my_putchar(hexa_res + '0');
}

void my_xflag(int n)
{
    my_put_hex_min(n);
}
