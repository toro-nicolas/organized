/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %F (a double)
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "myformats.h"

static char *my_get_str_float(double nb, formating_t *formating)
{
    long long int partie_entiere = ABS((int)nb);
    double partie_d = ABS(nb - partie_entiere);
    char *str_finale = malloc(sizeof(char) * 1000000);

    if (nb < 0){
        my_strcat(str_finale, "-");
        nb = -nb;
    }
    my_strcat(str_finale, my_str_nbr_long_long(partie_entiere));
    precise_it_double(str_finale, formating, partie_d);
    format_it_double(str_finale, formating, partie_d);
    return my_strdup(str_finale);
}

int flag_bigf(va_list list, formating_t *formating)
{
    char *temp = my_get_str_float(va_arg(list, double), formating);

    my_putstr(temp);
    return my_strlen(temp);
}
