/*
** Unit_Test_Lib
** File description:
** my_isblank
*/

#define IS_BLANK (str[i] == ' ' || str[i] == '\t')

int my_isblank(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (IS_BLANK)
            ++i;
        else
            return 0;
    }
    return 1;
}