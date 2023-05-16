/*
** File description:
** my_iscntrl
*/

#define IS_CNTRL (str[i] > '\0' && str[i] < ' ')

int my_iscntrl(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_CNTRL)
            ++i;
        else
            return 0;
    }
    return 1;
}