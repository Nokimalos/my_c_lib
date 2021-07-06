/*
** ctype.h
** File description:
** my_isxdigit
*/

#include <stdbool.h>

#define IS_XDIGIT ((str[i] >= '0' && str[i] <= '9') \
|| (str[i] >= 'a' && str[i] <= 'f') \
|| (str[i] >= 'A' && str[i] <= 'F'))

bool my_isxdigit(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_XDIGIT)
            return true;
    return false;
}