/*
** my_lib
** File description:
** my_strcmp
*/

/*____LIBC____*/

int my_strcmp(register const char *s1, register const char *s2)
{
    for (; *s1 == *s2; ++s1, ++s2)
        if (*s1 == '\0')
            return 0;
    return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
}

/*____LIB____*/

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int res1 = 0;
    int res2 = 0;

    for (; s1[i] != '\0'; res1 += s1[i], ++i);
    i = 0;
    for (; s2[i] != '\0'; res2 += s2[i], ++i);
    return res2 - res1;
}
