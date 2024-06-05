/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %S (an array of string)
*/

#include <stdarg.h>
#include <stddef.h>
#include "my.h"
#include "myformats.h"

int flag_bigs(va_list list, formating_t *formating)
{
    char **temp = va_arg(list, char **);
    int len = 0;
    int index_temp = 0;

    my_show_word_array(temp);
    while (temp[index_temp] != NULL) {
        len = len + my_strlen(temp[index_temp]) + 1;
        index_temp = index_temp + 1;
    }
    return len;
}
