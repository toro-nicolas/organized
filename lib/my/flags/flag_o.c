/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %o (an int in octal)
*/

#include <stdarg.h>
#include "my.h"
#include "myformats.h"

int flag_o(va_list list, formating_t *formating)
{
    size_t temp = va_arg(list, size_t);
    char *convert_base = specify_it_base(formating, temp, "01234567");

    precise_it_int(convert_base, formating, temp);
    if (formating->id_ft == 3 && convert_base[0] != '0') {
        my_revstr(convert_base);
        my_strcat(convert_base, "0");
        my_revstr(convert_base);
    }
    format_it_int(convert_base, formating, temp);
    my_putstr(convert_base);
    return my_strlen(convert_base);
}
