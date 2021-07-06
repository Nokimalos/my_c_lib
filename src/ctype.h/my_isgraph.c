/*
** ctype.h
** File description:
** my_isgraph
*/

#include <stdbool.h>

#define IS_GRAPH (str[i] >= '!' && str[i] <= '~')

bool my_isgraph(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (IS_GRAPH)
            return true;
    return false;
}