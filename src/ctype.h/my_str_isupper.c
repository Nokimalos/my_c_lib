/*
** my_lib
** File description:
** my_str_isupper
*/

#include <stdbool.h>

bool my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] >= 'A' && str[i] <= 'Z')
            return true;
    return false;
}