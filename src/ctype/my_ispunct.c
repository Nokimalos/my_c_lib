/*
** File description:
** my_ispunct
*/

#define IS_PUNCT ((str[i] > ' ' && str[i] < '0') \
        || (str[i] > '9' && str[i] < 'A') \
        || (str[i] > 'Z' && str[i] < 'a') \
        || (str[i] > 'z'))

int my_ispunct(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_PUNCT)
            ++i;
        else
            return 0;
    }
    return 1;
}