/*
** EPITECH PROJECT, 2023
** my_char_isprintable
** File description:
** Returns 1 if the characters (c) is printable or 0 if not
*/

#include "my.h"

int my_char_isprintable(char const c)
{
    if (c < 32 || c > 126)
            return 0;
    return 1;
}
