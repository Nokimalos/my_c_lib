/*
** my_strcat.c
** File description:
** my_strcat
*/

char *my_strcat(register char *dest, register const char *src)
{
    char *tmp = dest;

    for (; *dest; ++dest);
    for (; *dest = *src; *dest++, *src++);
    return tmp;
}
