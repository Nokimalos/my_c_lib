/*
** ctype.h
** File description:
** my_isnum
*/

#include <stdbool.h>

#define IS_NUM (str[i] >= '0' && str[i] <= '9')

bool my_isdigit(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_NUM)
            return true;
    return false;
}