/*
** EPITECH PROJECT, 2023
** my_str_isalpha
** File description:
** return 1 if str is alphabet character only and 0 if not
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    if (my_strlen(str) == 0)
        return 1;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a')
            || str[i] > 'z')
            return 0;
    }
    return 1;
}
