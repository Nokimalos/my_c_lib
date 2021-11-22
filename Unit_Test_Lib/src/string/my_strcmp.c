/*
** UTEST_LIB
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int result1 = 0;
    int result2 = 0;

    while (s1[i] != '\0') {
        result1 = result1 + s1[i];
        i = i + 1;
    }
    i = 0;
    while (s2[i] != '\0') {
        result2 = result2 + s2[i];
        i = i + 1;
    }
    return(result2 - result1);
}