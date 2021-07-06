/*
** ctype.h
** File description:
** my_isprint
*/

#include <stdbool.h>

#define IS_PRINT (str[i] >= ' ' && str[i] <= '~')

bool my_isprint(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_PRINT)
            return true;
    return false;
}