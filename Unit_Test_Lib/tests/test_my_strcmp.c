/*
** EPITECH PROJECT, 2020
** test_my_strcmp.c
** File description:
** test_my_strcmp
*/

#include "lib.h"
#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, comparee)
{
    char str1[] = "Hello world";
    char str2[] = "Hello world";

    cr_assert_eq(my_strcmp(str1, str2), 0);
}