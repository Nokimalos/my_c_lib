/*
** src
** File description:
** my_sqrt
*/

#define EXIT_ERROR -1

int my_sqrt(int nb)
{
    long i = 0;

    for (; i * i < nb; ++i);
    return (i * i == nb) ? i : EXIT_ERROR;
}