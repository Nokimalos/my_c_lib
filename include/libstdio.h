/*
** File description:
** libstdio
*/

#ifndef LIBSTDIO_H_
#define LIBSTDIO_H_

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

#endif /* !LIBSTDIO_H_ */