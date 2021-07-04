/*
** my_lib
** File description:
** my_atoi
*/

int my_atoi(char const *str)
{
    int nb = 0;
    int neg = 1;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '-')
            neg *= -1;
        if (str[i] >= '0' && str[i] <= '9')
            nb = nb * 10 + str[i] - '0';
    }
    if (nb > 0)
        return nb * neg;
    return 0;
}