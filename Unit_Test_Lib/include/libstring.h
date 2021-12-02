/*
** Unit_Test_Lib
** File description:
** libstring
*/

#ifndef LIBSTRING_H_
#define LIBSTRING_H_

#include <stddef.h>

int my_strcmp(char const *s1, char const *s2);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strcat(register char *dest, register const char *src);
char *my_strcpy(char *dest, const char *src);
size_t my_strlen(const char *str);
size_t kstrlen(const char *str);
size_t my_kstrlen(const char *str);
void *my_memset (void *dest, int val, size_t len);
void *my_memchr(const void *src, int search, size_t n);
void *my_memcpy(void * restrict dest, const void * restrict src, size_t len);
void *my_memccpy(void * restrict dest, const void * restrict src, int c, size_t n);
int my_memcmp(const void *to_compare, const void *compared, size_t size);
void *my_memmove(void *dest, const void *src, size_t size);

#endif /* !LIBSTRING_H_ */
