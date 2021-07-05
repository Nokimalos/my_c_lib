/*
** my_lib
** File description:
** my_str_islower
*/

#include <stdbool.h>

bool my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] >= 'a' && str[i] <= 'z')
            return true;
    return false;
}