/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** Concatenates a string (dest) with another string (src)
** and returns the destination string (dest)
*/

char *my_strcat(char *dest, char const *src)
{
    int len_dest = 0;
    int len_src = 0;
    int i = 0;

    while (dest[len_dest] != '\0') {
        len_dest = len_dest + 1;
    }
    while (src[len_src] != '\0') {
        len_src = len_src + 1;
    }
    for (i = 0; i <= len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i + 1] = '\0';
    return dest;
}
