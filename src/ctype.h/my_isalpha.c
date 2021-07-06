/*
** ctype.h
** File description:
** my_isalpha
*/

#include <stdbool.h>

#define IS_ALPHA ((str[i] >= 'a' && str[i] <= 'z') \
|| (str[i] >= 'A' && str[i] <= 'Z'))

bool my_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_ALPHA)
            return true;
    return false;
}
