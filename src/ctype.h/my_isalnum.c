/*
** ctype.h
** File description:
** my_isalnum
*/

#include <stdbool.h>

#define IS_ALNUM ((str[i] >= 'a' && str[i] <= 'z') \
|| (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))

bool my_isalnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_ALNUM)
            return true;
    return false;
}
