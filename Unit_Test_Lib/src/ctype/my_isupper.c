/*
** my_str_isupper.c
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if (str[j] >= 'A' && str[j] <= 'Z')
            j = j + 1;
        else
            return 0;
    }
    return 1;
}
