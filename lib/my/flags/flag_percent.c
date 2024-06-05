/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print %%
*/

#include "myformats.h"
#include "my.h"

int flag_percent(va_list liste, formating_t *formating)
{
    char str_finale[2] = "%\0";

    my_putstr(str_finale);
    return my_strlen(str_finale);
}
