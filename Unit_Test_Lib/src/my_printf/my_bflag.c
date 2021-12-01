/*
** EPITECH PROJECT, 2020
** my_bflag.c
** File description:
** my_bflag
*/

#include <unistd.h>
#include <stdio.h>
#include "bsprintf.h"

void my_putbinar(int nb)
{
    int binary_res = 0;

    if (nb > 2147483647)
        return;
    if (nb > 1 && nb <= 2147483647) {
        binary_res = nb % 2;
        nb = nb / 2;
        my_putbinar(nb);
    }
    else if (nb >= 0 && nb <= 1) {
        binary_res = nb % 2;
        nb = nb / 2;
    }
        my_putchar(binary_res + '0');
}

void my_bflag(int n)
{
    my_putbinar(n);
}
