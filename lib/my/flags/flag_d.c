/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %i (an int)
*/

#include <stdarg.h>
#include "my.h"
#include "myformats.h"

int flag_d(va_list list, formating_t *formating)
{
    size_t temp = va_arg(list, size_t);
    char *str_finale = specify_it_int(formating, temp);

    precise_it_int(str_finale, formating, temp);
    format_it_int(str_finale, formating, temp);
    my_putstr(str_finale);
    return my_strlen(str_finale);
}
