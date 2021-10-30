/*
** EPITECH PROJECT, 2020
** my_pflag.c
** File description:
** my_pflag
*/

#include <unistd.h>

void my_putchar(char c);
int my_putstr(char *str);
void my_xflag(int n);

void *my_put_p(int n)
{
    if (n == 0)
        my_putstr("(nil)");
    else {
        my_putstr("0x");
        my_xflag(n);
    }
}

void my_pflag(int n)
{
    my_put_p(n);
}
