/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** Concatenates a string (dest) with another string (src)
** with a defined size (n) and returns the destination string (dest)
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int len_dest = my_strlen(dest);
    int len_src = n;
    int i = 0;

    for (i = 0; i < len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return dest;
}
