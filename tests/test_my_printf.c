/*
** File description:
** test_my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "libstdio.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
}

Test(my_printf, no_flag, .init = redirect_all_std)
{
    my_printf("je suis kaan\n");
    cr_assert_stdout_eq_str("je suis kaan\n");
}

Test(my_printf, dflag, .init = redirect_all_std)
{
    int k = 18;

    my_printf("%d\n", k);
    cr_assert_stdout_eq_str("18\n");
}

Test(my_printf, include_dflag, .init = redirect_all_std)
{
    int k = 17;

    my_printf("J'ai %d ans.\n", k);
    cr_assert_stdout_eq_str("J'ai 17 ans.\n");
}

Test(my_printf, sflag, .init = redirect_all_std)
{
    char *str = "je suis oui";

    my_printf("%s\n", str);
    cr_assert_stdout_eq_str("je suis oui\n");
}

Test(my_printf, include_sflag, .init = redirect_all_std)
{
    char *str = "je l'avoue";

    my_printf("Je suis moche %s\n", str);
    cr_assert_stdout_eq_str("Je suis moche je l'avoue\n");
}

Test(my_printf, cflag, .init = redirect_all_std)
{
    char c = 'k';

    my_printf("%c\n", c);
    cr_assert_stdout_eq_str("k\n");
}

Test(my_printf, include_cflag, .init = redirect_all_std)
{
    char a = 'k';
    char b = 'a';
    char c = 'a';
    char d = 'n';

    my_printf("%c%c%c%c\n", a, b, c, d);
    cr_assert_stdout_eq_str("kaan\n");
}

Test(my_printf, pflag, .init = redirect_all_std)
{
    int i = 57;

    my_printf("%p\n", i);
    cr_assert_stdout_eq_str("0x39\n");
}

Test(my_printf, longpflag, .init = redirect_all_std)
{
    int i = 1997;

    my_printf("%p\n", i);
    cr_assert_stdout_eq_str("0x7cd\n");
}

Test(my_printf, nullpflag, .init = redirect_all_std)
{
    int i = 0;

    my_printf("%p\n", i);
    cr_assert_stdout_eq_str("(nil)\n");
}

Test(my_printf, minibflag, .init = redirect_all_std)
{
    int b = 1;

    my_printf("%b\n", b);
    cr_assert_stdout_eq_str("1\n");
}

Test(my_printf, bflag, .init = redirect_all_std)
{
    int b = 56;

    my_printf("%b\n", b);
    cr_assert_stdout_eq_str("111000\n");
}

Test(my_printf, iflag, .init = redirect_all_std)
{
    int i = 176;

    my_printf("%i\n", i);
    cr_assert_stdout_eq_str("176\n");
}

Test(my_printf, s_and_c, .init = redirect_all_std)
{
    char c = 'k';
    char *str = "aan";

    my_printf("%c%s\n", c, str);
    cr_assert_stdout_eq_str("kaan\n");
}

Test(my_printf, xflag, .init = redirect_all_std)
{
    int x = 13;

    my_printf("%x\n", x);
    cr_assert_stdout_eq_str("d\n");
}

Test(my_printf, longxflag, .init = redirect_all_std)
{
    int x = 123456789;

    my_printf("%x\n", x);
    cr_assert_stdout_eq_str("75bcd15\n");
}

Test(my_printf, nullx, .init = redirect_all_std)
{
    int x = 0;

    my_printf("%x\n", x);
    cr_assert_stdout_eq_str("0\n");
}

Test(my_printf, nullhigherx, .init = redirect_all_std)
{
    int x = 13;
    int xa = 13;

    my_printf("%x, %X\n", x, xa);
    cr_assert_stdout_eq_str("d, D\n");
}

Test(my_printf, higherxflag, .init = redirect_all_std)
{
    int x = 13;

    my_printf("%X\n", x);
    cr_assert_stdout_eq_str("D\n");
}

Test(my_printf, longhighxflag, .init = redirect_all_std)
{
    int x = 123456789;

    my_printf("%X\n", x);
    cr_assert_stdout_eq_str("75BCD15\n");
}

Test(my_printf, toomanynbbflag, .init = redirect_all_std)
{
    int b = 2147483648;

    my_printf("%b\n", b);
    cr_assert_stdout_eq_str("0\n");
}

Test(my_printf, toomanynbxxflag, .init = redirect_all_std)
{
    int x = 2147483648;

    my_printf("%X\n", x);
    cr_assert_stdout_eq_str("0\n");
}

Test(my_printf, toomanynbxflag, .init = redirect_all_std)
{
    int x = 2147483648;

    my_printf("%x\n", x);
    cr_assert_stdout_eq_str("0\n");
}

Test(my_printf, toomanynboflag, .init = redirect_all_std)
{
    int o = 2147483648;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("\n");
}

Test(my_printf, minioflag, .init = redirect_all_std)
{
    int o = 7;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("7\n");
}

Test(my_printf, oflag, .init = redirect_all_std)
{
    int o = 21;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("25\n");
}

Test(my_printf, longoflag, .init = redirect_all_std)
{
    int o = 19988991;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("114200777\n");
}

Test(my_printf, uflag, .init = redirect_all_std)
{
    int u = 13;

    my_printf("%u\n", u);
    cr_assert_stdout_eq_str("13\n");
}

Test(my_printf, negativuflag, .init = redirect_all_std)
{
    int u = -13;

    my_printf("%u\n", u);
    cr_assert_stdout_eq_str("4294967283\n");
}

Test(my_printf, modulomodulo, .init = redirect_all_std)
{
    my_printf("kaan%%oui");
    cr_assert_stdout_eq_str("kaan%oui");
}

Test(my_printf, mixmodulonbandstrings, .init = redirect_all_std)
{
    my_printf("%X%s%%%%%%%d%s%d%s%d\n", 34, "oui", 31, "non", 32, "peut etre", 33);
    cr_assert_stdout_eq_str("22oui%%%31non32peut etre33\n");
}

Test(my_printf, xmax, .init = redirect_all_std)
{
    int x = 16;

    my_printf("%x\n", x);
    cr_assert_stdout_eq_str("10\n");
}

Test(my_printf, omax, .init = redirect_all_std)
{
    int o = 8;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("10\n");
}

Test(my_printf, bmax, .init = redirect_all_std)
{
    int b = 2;

    my_printf("%b\n", b);
    cr_assert_stdout_eq_str("10\n");
}

Test(my_printf, o, .init = redirect_all_std)
{
    int o = 7;

    my_printf("%o\n", o);
    cr_assert_stdout_eq_str("7\n");
}

Test(my_put_nbr, little_number, .init = redirect_all_std)
{
    my_put_nbr(8);
    cr_assert_stdout_eq_str("8");
}

Test(my_put_nbr, medium_number, .init = redirect_all_std)
{
    my_put_nbr(13);
    cr_assert_stdout_eq_str("13");
}

Test(my_put_nbr, okay_number, .init = redirect_all_std)
{
    my_put_nbr(123);
    cr_assert_stdout_eq_str("123");
}

Test(my_put_nbr, big_number, .init = redirect_all_std)
{
    my_put_nbr(123456789);
    cr_assert_stdout_eq_str("123456789");
}

Test(my_putnbr, null, .init = redirect_all_std)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, negative_number, .init = redirect_all_std)
{
    my_put_nbr(-179);
    cr_assert_stdout_eq_str("-179");
}