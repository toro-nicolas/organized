/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %s (a string)
*/

#include <stdarg.h>
#include "my.h"
#include "myformats.h"

int flag_s(va_list list, formating_t *formating)
{
    char *temp = va_arg(list, char *);
    char temp2[5000] = {0};

    my_strcat(temp2, temp);
    format_it_str(temp2, formating);
    my_putstr(temp2);
    return my_strlen(temp2);
}
