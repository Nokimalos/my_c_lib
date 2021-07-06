/*
** src
** File description:
** my_pow
*/

int my_pow(int base, int exp)
{
    int res = 1;

    for (; exp--; res *= base);
    return res;
}