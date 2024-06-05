/*
** EPITECH PROJECT, 2023
** my_putstr_limited
** File description:
** Prints a string (str) in stdout
** with a defined size (size)
*/

#include "my.h"

int my_putstr_sized(char const *str, int size)
{
    for (int i = 0; i < size; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
