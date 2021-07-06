/*
** my_lib
** File description:
** count_words
*/

int count_words(char *str)
{
    int i = 0;

    for (; str[i] != '\0' && str[i] != ' '; ++i);
    return i;
}