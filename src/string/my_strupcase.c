/*
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    int j = 0;

    while (str[j] != '\0') {
        if (str[j] >= 'a' && str[j] <= 'z') {
            str[j] = str[j] - 32;
            j = j + 1;
        }
        else
            j = j + 1;
    }
    return (str);
}
