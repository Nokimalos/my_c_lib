/*
** my.h
** File description:
** my
*/

#ifndef _LIB_H_
#define _LIB_H_

#include <stddef.h>

void my_put_nbr(int nb);
int my_squareroot(int nb);
int my_factrec(int nb);

/*  CTYPE_H    */

int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isnum(char const *str);
int my_isalnum(const char *str);
int my_isspace(const char *str);
int my_isdigit(int i);
int my_isprint(const char *str);
int my_isxdigit(const char *str);
int my_isblank(const char *str);
int my_ispunct(const char *str);
int my_isgraph(const char *str);
int my_iscntrl(const char *str);

/*  STRING_H    */

int my_strcmp(char const *s1, char const *s2);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strcat(register char *dest, register const char *src);
size_t my_strlen(const char *str);
size_t kstrlen(const char *str);
size_t my_kstrlen(const char *str);
void *my_memset (void *dest, int val, size_t len);
void *my_memchr(const void *src, int search, size_t n);
void *my_memcpy(void * restrict dest, const void * restrict src, size_t len);
void *my_memccpy(void * restrict dest, const void * restrict src, int c, size_t n);

#endif /*__LIB_H__*/
