/*
** my_isspace.c
** File description:
** my_isspace
*/

#define IS_SPACE (str[i] == ' ' || str[i] == '\f' \
        || str[i] == '\n' || str[i] == '\r' \
        || str[i] == '\t' || str[i] == '\v')

int my_isspace(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_SPACE)
            ++i;
        else
            return 0;
    }
    return 1;
}
