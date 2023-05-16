/*
** File description:
** my_facrec
*/

int my_factrec(int nb)
{
    if (nb < 0 || nb > 12)
        return 0;
    else if (nb == 0 || nb == 1)
        return 1;
    return (nb * my_factrec(nb - 1));
}