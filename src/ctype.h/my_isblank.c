/*
** ctype.h
** File description:
** my_isblank
*/

#include <stdbool.h>

#define IS_BLANK (str[i] == ' ' || str[i] == '\t')

bool my_isblank(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_BLANK)
            return true;
    return false;
}