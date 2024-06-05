/*
** EPITECH PROJECT, 2023
** specifier int
** File description:
** specifier int
*/

#include "my.h"
#include "myformats.h"

static char *select_long_long(size_t temp)
{
    return my_str_nbr_long_long(temp);
}

static char *select_short(size_t temp)
{
    return my_str_nbr_short((short int)temp);
}

static char *select_short_short(size_t temp)
{
    return my_str_nbr_short_short((signed char)temp);
}

static char *select_size_t(size_t temp)
{
    return my_str_nbr_size_t(temp);
}

char *specify_it_int(formating_t *formating, size_t temp)
{
    char *(*specify[])(size_t) = {&select_long_long, &select_long_long,
        &select_short, &select_short_short, &select_size_t,
        &select_size_t, &select_size_t, &select_size_t};

    if (formating->id_sp != -1) {
        return specify[formating->id_sp](temp);
    } else {
        return my_str_nbr(temp);
    }
}
