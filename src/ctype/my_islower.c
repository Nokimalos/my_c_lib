/*
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if (str[j] >= 'a' && str[j] <= 'z')
            j = j + 1;
        else
            return 0;
    }
    return 1;
}
