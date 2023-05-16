/*
** File description:
** libctype
*/

#ifndef LIBCTYPE_H_
#define LIBCTYPE_H_

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

#endif /* !LIBCTYPE_H_ */