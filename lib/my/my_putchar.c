/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** Prints a char in the stdout
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
