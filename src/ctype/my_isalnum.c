/*
** File description:
** my_isalnum
*/

#include <stdbool.h>

#define IS_ALNUM ((str[i] >= 'a' && str[i] <= 'z') \
                  || (str[i] >= 'A' && str[i] <= 'Z') \
                  || (str[i] >= '0' && str[i] <= '9'))

int my_isalnum(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_ALNUM)
            ++i;
        else
            return 0;
    }
    return 1;
}
