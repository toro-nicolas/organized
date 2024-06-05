/*
** EPITECH PROJECT, 2023
** my_strupcase
** File description:
** Replaces upcase by lowcase of a string (str) and returns them
*/

char *my_strupcase(char *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len = len + 1;
    }
    for (int i = 0; i < len; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
