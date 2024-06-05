/*
** EPITECH PROJECT, 2023
** my_strcapitalize
** File description:
** capitalize first letter of new word (preceding by a ' ' or '-')
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    str = my_strlowcase(str);
    for (int i = 1; i < my_strlen(str); i++) {
        if (((str[i - 1] == '+' || str[i - 1] == '-' || str[i - 1] == ' '))
            && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32;
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    return str;
}
