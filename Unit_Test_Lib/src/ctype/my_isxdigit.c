/*
** Unit_Test_Lib
** File description:
** my_isxdigit
*/

#define IS_XDIGIT ((str[i] >= '0' && str[i] <= '9') \
|| (str[i] >= 'a' && str[i] <= 'f') \
|| (str[i] >= 'A' && str[i] <= 'F'))

int my_isxdigit(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_XDIGIT)
            ++i;
        else
            return 0;
    }
    return 1;
}