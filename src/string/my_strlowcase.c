/*
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if (str[j] >= 'A' && str[j] <= 'Z') {
            str[j] = str[j] + 32;
            j = j + 1;
        }
        else
            j = j + 1;
    }
    return str;
}
