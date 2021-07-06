/*
** src
** File description:
** my_fact
*/

#define EXIT_ERROR 0

int my_fact(int nb)
{
    if (nb < 0 || nb > 12)
        return EXIT_ERROR;
    else if (nb == 0 || nb == 1)
        return 1;
    return (nb * my_fact(nb - 1));
}