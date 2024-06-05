/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** Copy a string (src) and paste it on another string (dest)
** with a defined size (n)
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int len = 0;

    while (src[len] != '\0') {
        len = len + 1;
    }
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (len < n) {
        dest[len] = '\0';
    }
    return dest;
}
