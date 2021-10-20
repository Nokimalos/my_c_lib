/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void afficher_nb(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        afficher_nb(nb / 10);
        afficher_nb(nb % 10);
    }
    else
        my_putchar(nb + '0');
}

int main(void)
{
    afficher_nb(5);
    return 0;
}
