/*
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, const char *src)
{
    char *d_tmp = dest;
    const char *s_tmp = src;

    while (*d_tmp++ = *s_tmp++);
    return dest;
}