/*
** EPITECH PROJECT, 2023
** my_showstr
** File description:
** Prints a string (str) but replaces
** non-printable characters with their hexadecimal number
*/

#include "my.h"

static int is_printable(char c)
{
    if (c >= 32 && c <= 126) {
        return 1;
    } else {
        return 0;
    }
}

static void check_zero_in_hexadecimal(char c)
{
    if (c < 16)
        my_putchar('0');
}

int my_showstr(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (is_printable(str[i]) == 1) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            check_zero_in_hexadecimal(str[i]);
            my_putnbr_base(str[i], "0123456789abcedf");
        }
    }
    return 0;
}
