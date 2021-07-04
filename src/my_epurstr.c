/*
** my_lib
** File description:
** my_epurstr
*/

char *my_epurstr(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; ++i);
    str[i - 1] = '\0';
    return str;
}