/*
** ctype.h
** File description:
** my_iscntrl
*/

#include <stdbool.h>

#define IS_CNTRL (str[i] == 127 || \
 (str[i] < ' ' && str[i] != '\t'))

bool my_iscntrl(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_CNTRL)
            return true;
    return false;
}