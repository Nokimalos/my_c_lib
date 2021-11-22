/*
** my_str_isnum.c
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if (str[j] >= '0' && str[j] <= '9')
            j = j + 1;
        else
            return 0;
    }
    return 1;
}
