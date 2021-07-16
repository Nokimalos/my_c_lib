/*
** my_lib
** File description:
** my_str_to_wordarray
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

/*____LIB____*/

int kstrlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; ++i);
    return i;
}

int count_word(char *str, char delim)
{
    int i = 0;
    int j = 1;

    for (; str[i] != '\0'; ++i)
        if (str[i] == delim)
            ++j;
    return j;
}

int count_str(char *str, char delim, int beg)
{
    int i = 0;
    int j = my_strlen(str);

    if (str[beg] == delim)
        ++beg;
    for (; str[beg] != delim && str[beg] != '\0'; ++beg, ++i);
    return i;
}

char **my_str_to_word_array(char *str, char delim)
{
    int size = 0;
    int cw = count_word(str, delim);
    char **tab = mallic(sizeof(char *) * (cw * 2));

    if (tab == NULL)
        return NULL;
    for (int i, k = 0; i < cw + 1; ++i, ++k) {
        size = count_str(str, k, delim);
        tab[i] = malloc(size + 1);
        if (tab[i] == NULL)
            return NULL;
        for (int j = 0; j < size && str[k] 
        != delim && str[k] != '\0'; ++j, ++k) {
            tab[i][j] = str[k];
            tab[i][j + 1] = '\0';
        }
        tab[i + 1] = NULL;
    }
    return tab;
}