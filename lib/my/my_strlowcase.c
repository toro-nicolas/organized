/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** Replaces upcase by lowcase of a string (str) and returns them
*/

char *my_strlowcase(char *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len = len + 1;
    }
    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
