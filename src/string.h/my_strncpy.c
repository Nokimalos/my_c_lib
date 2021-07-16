/*
** my_lib
** File description:
** my_strncpy
*/

#include <string.h>

/*____LIBC____*/

char *my_strncpy(char *dest, const char *src, register size_t n)
{
    if (n != 0) {
        register char *tmp_dest = dest;
        register const char *tmp_src = src;
        do {
            if ((*tmp_dest++ = *tmp_src++) == 0) {
                while (--n != 0)
                    *tmp_dest++ = 0;
                break;
            }
        }
        while (--n != 0);
    }
    return (dest);
}

/*____LIB____*/

char *my_strncpy(char *dest, const char *src, register size_t n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
