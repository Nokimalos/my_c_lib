/*
** Unit_Test_Lib
** File description:
** test_string_functions
*/

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include "libstring.h"

Test(my_strcat, concatenate)
{
    char dest[] = "Hello";
    char src[] = "World";

    cr_assert_str_eq(my_strcat(dest, src), "HelloWorld");
}

Test(my_strcmp, comparee)
{
    char str1[] = "Hello world";
    char str2[] = "Hello world";

    cr_assert_eq(my_strcmp(str1, str2), 0);
}

Test(my_strlen, empty_string)
{
    char str[] = "";

    cr_assert_eq(my_strlen(str), 0);
}

Test(my_strlen, check_size_of_string)
{
    char str[] = "Hello world";

    cr_assert_eq(my_strlen(str), 11);
}

Test(kstrlen, empty_string_kstrlen)
{
    char str[] = "";

    cr_assert_eq(kstrlen(str), 0);
}

Test(kstrlen, check_size_of_string_kstrlen)
{
    char str[] = "Hello world";

    cr_assert_eq(kstrlen(str), 11);
}

Test(my_kstrlen, empty_string_my_kstrlen)
{
    char str[] = "";

    cr_assert_eq(my_kstrlen(str), 0);
}

Test(my_kstrlen, check_size_of_string_my_kstrlen)
{
    char str[] = "Hello world";

    cr_assert_eq(my_kstrlen(str), 11);
}

Test(my_strlowcase, lower)
{
    char str[] = "HELLOWORLD";

    cr_assert_str_eq(my_strlowcase(str), "helloworld"); 
}

Test(my_strlowcase, lower_number)
{
    char str[] = "HELLO W8RLD";

    cr_assert_str_eq(my_strlowcase(str), "hello w8rld");
}

Test(my_strlowcase, lower_with_upper)
{
    char str[] = "hello WORLD";

    cr_assert_str_eq(my_strlowcase(str), "hello world");
}

Test(my_strupcase, upper)
{
    char str[] = "hello";

    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, uppernumber)
{
    char str[] = "hello world 8";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD 8");
}

Test(my_strupcase, upperwithup)
{
    char str[] = "HELLO world";

    cr_assert_str_eq(my_strupcase(str), "HELLO WORLD");
}

Test(my_strcpy, copy)
{
    const char first_name[] = "Kaan";
    char full_name[] = "Kaan Noki";

    cr_assert(my_strcpy(full_name, first_name) == strcpy(full_name, first_name));
}

Test(my_memset, memory_set)
{
    int array [] = {54};
    size_t size = sizeof( int ) * 1;

    cr_assert(my_memset(array, 0, size) == memset(array, 0, size));
}

Test(my_memchr, reconize_data)
{
    char data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    const unsigned int size = 10;

    cr_assert(my_memchr(data, 50, size) == memchr(data, 50, size));
}

Test(my_memcpy, copy_data)
{
    int array[] = {54, 85, 20, 63, 21};
    int length = sizeof( int ) * 5;
    int *copy = (int *) malloc(length);

    cr_assert(my_memcpy(copy, array, length) == memcpy(copy, array, length));
}

Test(my_memcmp, compare_data)
{
    int array1[] = {54, 85, 20, 63, 21};
    int array2[] = {54, 85, 19, 63, 21};
    size_t size = sizeof(int) * 5;

    cr_assert(my_memcmp(array1, array2, size) == memcmp(array1, array2, size));
}

Test(my_memmove, move_data)
{
    int data[] = {20, 30, 40, 50, 60, 70, 80, 90, 100, 0};
    void *src = (void *) data;
    void *dest = (void *) (data + 1);
    size_t size = 10 * sizeof(int);

    cr_assert(memmove(dest, src, size) == my_memmove(dest, src, size));
}

Test(my_strchr, move_str)
{
    const char *src = "The C Language";
    int len = strlen(src);
    char *dest = (char *)malloc(sizeof(char) * (len + 1));

    cr_assert(my_strchr(dest, 'a') == strchr(dest, 'a'));
}