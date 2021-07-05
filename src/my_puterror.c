/*
** my_lib
** File description:
** my_puterror
*/

void my_putchar_error(char c)
{
    write(2, &c, 1);
}

void my_puterror(char *str)
{
    for (int i = 0; str[i] != '\0'; my_putchar_error(str[++i]));
}