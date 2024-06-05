/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** Returns a duplication of a string (src)
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *result;
    int len_src = my_strlen(src);
    int i = 0;

    result = malloc(sizeof(char) * len_src);
    for (i = 0; i < len_src; i++) {
        result[i] = src[i];
    }
    result[i] = '\0';
    return result;
}
