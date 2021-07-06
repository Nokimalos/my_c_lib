/*
** my_lib
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int res1 = 0;
    int res2 = 0;

    for (; s1[i] != '\0'; res1 += s1[i], ++i);
    i = 0;
    for (; s2[i] != '\0'; res2 += s2[i], ++i);
    return res2 - res1;
}