/*
** my_lib
** File description:
** my_strncat
*/

#include <string.h>
#include <stddef.h>

/*____LIBC____*/

size_t my_strlen(const char *str)
{
    register const char *tmp = NULL;

    for (tmp = str; *tmp; ++tmp);
    return tmp - str;
}

char *my_strcpy(register char *dest, register const char *src)
{
    char *tmp = dest;

    for (; *dest = *src; ++dest, ++src);
    return tmp;
}

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

char *my_strncat(char *dest, const char *src, size_t nb)
{
    size_t dest_len = my_strlen(dest);
    size_t src_len = my_strlen(src);

    if (src_len < nb)
        my_strcpy(&dest[dest_len], src);
    else {
        my_strncpy(&dest[dest_len], src, nb);
        dest[dest_len + nb] = '\0';
    }
    return dest;
}

/*____LIB____*/

char *my_strncat(char *dest, const char *src, size_t nb)
{
    int i = 0;
    int j = 0;

    if (src == NULL || dest == NULL || nb == NULL)
        return NULL;
    for (; dest[i] != '\0'; ++i);
    for (; j < nb; ++j)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}
