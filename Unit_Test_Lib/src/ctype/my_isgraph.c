/*
** Unit_Test_Lib
** File description:
** my_isgraph
*/

#define IS_GRAPH (str[i] >= '!' && str[i] <= '~')

int my_isgraph(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_GRAPH)
            ++i;
        else
            return 0;
    }
    return 1;
}