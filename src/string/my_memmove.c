/*
** Unit_Test_Lib
** File description:
** my_memmove
*/

#include <stddef.h>

void *my_memmove(void *dest, const void *src, size_t size)
{
    // Moove the memory normaly
    char *d_tmp = dest;
    const char *s_tmp = src;

    // If the two memory areas overlap
    char *d_tmp_overlapped = d_tmp + (size - 1);
    const char *s_tmp_overlapped = s_tmp + (size - 1);

    if (s_tmp > d_tmp) {
        while (size--)
            *d_tmp++ = *s_tmp++;
    }
    // We manage the case if the two memory areas overlap
    else {
        while (size--)
            *(unsigned char *)d_tmp_overlapped-- = *(unsigned char *)s_tmp_overlapped--;
    }
    return dest;
}