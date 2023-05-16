/*
** File description:
** my_isprint
*/

#define IS_PRINT (str[i] >= ' ' && str[i] <= '~')

int my_isprint(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_PRINT)
            ++i;
        else
            return 0;
    }
    return 1;
}