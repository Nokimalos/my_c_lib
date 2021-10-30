/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i += 1;
    }
    return (i);
}
