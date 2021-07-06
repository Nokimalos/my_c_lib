/*
** my_lib
** File description:
** my_str_isalpha
*/

#include <stdbool.h>

#define IS_ALPHA ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))

bool my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_ALPHA)
            return true;
    return false;
}