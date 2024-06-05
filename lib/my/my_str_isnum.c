/*
** EPITECH PROJECT, 2023
** my_str_isnum
** File description:
** return 1 if str is only digit or zero if not
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    if (my_strlen(str) == 0)
        return 1;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}
