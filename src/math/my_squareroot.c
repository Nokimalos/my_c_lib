/*
** UTEST_LIB
** File description:
** my_squareroot
*/

int my_Isquareroot(int nb)
{
    long i = 0;

    for (; i * i < nb; ++i);
    return (i * i == nb) ? i : -1;
}

float my_Fsquareroot(float nb)
{
    float i = 0;

    for (; i * i < nb; ++i);
    return (i * i == nb) ? i : -1;
}

double my_Dsquareroot(double nb)
{
    double i = 0;

    for (; i * i < nb; ++i);
    return (i * i == nb) ? i : -1;
}