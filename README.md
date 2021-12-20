# my_lib

Hi ! It's Noki and this repo is for all the functions of the LIB C and some util functions that I code.

There are some Unit Tests made with Criterion for the functions.

# Functions

## Ctype functions : ```#include "libctype.h" ```
```c
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
```

## Math functions : ```#include "libmath.h" ```
```c
int my_squareroot(int nb);
int my_factrec(int nb);
```

## Stdio functions : ```#include "libstdio.h" ```
```c
void my_putchar(char c);
int my_putstr(char *str);
void my_put_nbr(int nb);
void my_higher_xflag(int n);
void my_xflag(int n);
void my_oflag(int n);
void my_bflag(int n);
void my_uflag(int n);
void my_pflag(int n);
void my_printf(char *n, ...);
```

## Stdlib functions : ```#include "libstdlib.h" ```
```c
void *my_calloc(size_t nmemb, size_t size);
```

## String functions : ```include "libstring.h" ```
```c
int my_strcmp(char const *s1, char const *s2);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strcat(register char *dest, register const char *src);
char *my_strcpy(char *dest, const char *src);
char *my_strchr(const char *str, int search);
size_t my_strlen(const char *str);
size_t kstrlen(const char *str);
size_t my_kstrlen(const char *str);
void *my_memset (void *dest, int val, size_t len);
void *my_memchr(const void *src, int search, size_t n);
void *my_memcpy(void * restrict dest, const void * restrict src, size_t len);
void *my_memccpy(void * restrict dest, const void * restrict src, int c, size_t n);
int my_memcmp(const void *to_compare, const void *compared, size_t size);
void *my_memmove(void *dest, const void *src, size_t size);
void my_bzero(void *s, size_t n);
```

# Unit Test with Criterion

![coverage](https://user-images.githubusercontent.com/72025226/138173352-f47d264a-2445-4b0a-abb4-95a765279cad.jpeg)

Coverage :

         - Lines : 100%
         - Branches : 93.3%

# How to test to compile the Lib and see the tests :
         Prerequires :
         - Criterion
         - CMake

         - make re -> Compile the lib.
         - firefox covr.html -> See the tests on HTML page.
         - make clean -> clean .html, .gcda, .gcno and test executable.
         - make cleanobjs -> clean all the .o files.
         - make fclean -> make clean and make cleanobjs at the same time.

Enjoy :)
