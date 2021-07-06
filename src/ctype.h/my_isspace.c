/*
** ctype.h
** File description:
** my_isspace
*/

#include <stdbool.h>

#define IS_SPACE (str[i] == ' ' || str[i] == '\f' \
|| str[i] == '\n' || str[i] == '\r' \
|| str[i] == '\t' || str[i] == '\v')

bool my_isspace(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_SPACE)
            return true;
    return false;
}