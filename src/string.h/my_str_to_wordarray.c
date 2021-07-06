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

int my_strlen(char *str)
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
}