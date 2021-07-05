/*
** my_lib
** File description:
** my_revstr (strrev)
*/

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; ++i);
    return i;
}

char *my_revstr(char *str)
{
    int temp = 0;
    int len = my_strlen(str) - 1;

    for (int i = 0; i < len; ++i, len -= 1) {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
    }
    return str;
}
