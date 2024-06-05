/*
** EPITECH PROJECT, 2023
** my_putstr_error
** File description:
** Prints a string (str) in stderr
*/

#include <unistd.h>

int my_putstr_error(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i = i + 1;
    }
    return 0;
}
