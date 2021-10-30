/*
** my.h
** File description:
** my
*/

#ifndef _LIB_H_
#define _LIB_H_

#include <stddef.h>

size_t my_strlen(const char *str);
size_t kstrlen(const char *str);
size_t my_kstrlen(const char *str);
void my_put_nbr(int nb);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char *my_strlowcase(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strupcase(char *str);
int my_squareroot(int nb);
int my_factrec(int nb);

#endif /*__LIB_H__*/
