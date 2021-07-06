/*
** ctype.h
** File description:
** my_islower
*/

#include <stdbool.h>

#define IS_LOWER (str[i] >= 'a' && str[i] <= 'z')

bool my_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_LOWER)
            return true;
    return false;
}