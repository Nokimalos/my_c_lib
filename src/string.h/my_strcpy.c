/*
** my_lib
** File description:
** my_strcpy
*/

/*____LIBC____*/

char *kstrcpy(register char *dest, register const char *src)
{
    char *tmp = dest;

    for (; *dest = *src; ++dest, ++src);
    return tmp;
}

/*____LIB____*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
