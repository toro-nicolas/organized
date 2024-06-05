/*
** EPITECH PROJECT, 2023
** my_array_of_array_len
** File description:
** Returns the lenghts of array of array (array)
*/

#include <stddef.h>

int my_array_of_array_len(char **array)
{
    int len = 0;

    while (array[len] != NULL) {
        len = len + 1;
    }
    return len;
}
