/*
** my_putnbr_base.c
** File description:
** my_putnbr_base
*/

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>
#include <stddef.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(const char *str)
{
    register const char *tmp = NULL;

    for (tmp = str; *tmp; ++tmp);
    return tmp - str;
}

bool check_base(int nb, int base_len)
{
    if (base_len == 0)
        return false;
    if (nb < INT_MIN || nb > INT_MAX)
        return false;
    return true;
}

int my_putnbr_base(int nb, char *base)
{
    int base_len = my_strlen(base);

    if (check_base(nb, base_len) == false)
        return 84;
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    else if (nb != 0) {
        my_putnbr_base(nb / base_len, base);
        my_putchar(base[nb % base_len]);
    }
    return 0;
}

/*
int main(int ac, char **av)
{
    int nb = atoi(av[1]);
    char *base = av[2];

    if (my_putnbr_base(nb, base) == 84)
        return 84;
    return 0;
}
*/
