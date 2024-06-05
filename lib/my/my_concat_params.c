/*
** EPITECH PROJECT, 2023
** day08
** File description:
** Task02
*/

#include <stdlib.h>
#include "my.h"

char *my_concat_params(int argc, char **argv)
{
    char *result;
    int len_result = 0;
    int j = 0;

    for (int i = 0; i < argc; i++) {
        len_result = len_result + my_strlen(argv[i]);
    }
    result = malloc(sizeof(char) * (len_result + argc));
    for (j = 0; j < argc; j++) {
        result = my_strcat(result, argv[j]);
        result = my_strcat(result, "\n");
    }
    result[len_result + argc] = '\0';
    return result;
}
