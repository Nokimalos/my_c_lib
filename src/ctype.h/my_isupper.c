/*
** ctype.h
** File description:
** my_isupper
*/

#include <stdbool.h>

#define IS_UPPER (str[i] >= 'A' && str[i] <= 'Z')

bool my_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_UPPER)
            return true;
    return false;
}