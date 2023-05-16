/*
** File description:
** my_strchr
*/

char *my_strchr(const char *str, int search)
{
    for (;*str++;)
        if (*str == search)
            return (char *)str;
    return 0;
}