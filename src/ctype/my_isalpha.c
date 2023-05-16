/*
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
            j = j + 1;
        else
            return 0;
    }
    return 1;
}
