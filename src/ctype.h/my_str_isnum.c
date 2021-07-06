/*
** my_lib
** File description:
** my_str_isnum
*/

#include <stdbool.h>

bool my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] >= '0' && str[i] <= '9')
            return true;
    return false;
}