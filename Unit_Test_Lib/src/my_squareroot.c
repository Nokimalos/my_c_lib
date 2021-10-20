/*
** UTEST_LIB
** File description:
** my_squareroot
*/

int my_squareroot(int nb)
{
    long i = 0;

    for (; i * i < nb; ++i);
    return (i * i == nb) ? i : -1;
}