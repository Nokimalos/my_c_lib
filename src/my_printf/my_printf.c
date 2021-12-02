/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf.c
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "libstdio.h"
#include "lib.h"

void call_my_flags(char *n, int i, va_list list)
{
        if (n[i + 1] == 'c')
            my_putchar(va_arg(list, int));
        if (n[i + 1] == 's')
            my_putstr(va_arg(list, char *));
        if (n[i + 1] == 'd')
            my_put_nbr(va_arg(list, int));
        if (n[i + 1] == 'i')
            my_put_nbr(va_arg(list, int));
        if (n[i + 1] == 'x')
            my_xflag(va_arg(list, int));
        if (n[i + 1] == 'X')
            my_higher_xflag(va_arg(list, int));
        if (n[i + 1] == 'o')
            my_oflag(va_arg(list, int));
        if (n[i + 1] == 'b')
            my_bflag(va_arg(list, int));
        if (n[i + 1] == 'u')
            my_uflag(va_arg(list, int));
        if (n[i + 1] == 'p')
            my_pflag(va_arg(list, int));
}

void call_my_flags2(char *n, int i, va_list list)
{
    if (n[i + 1] == '%')
        my_putchar('%');
}

void my_printf(char *n, ...)
{
    va_list list;

    va_start(list, n);
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '%') {
            call_my_flags(n, i, list);
            call_my_flags2(n, i, list);
            i += 1;
        }
        else if (n[i] != '%')
            my_putchar(n[i]);
    }
    va_end(list);
}
