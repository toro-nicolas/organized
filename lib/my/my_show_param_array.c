/*
** EPITECH PROJECT, 2023
** my_show_param_array
** File description:
** Prints the name, the length and word array of
** each element of an array (par) of the info_param struct
*/

#include "my.h"

int my_show_param_array(struct info_param const *par)
{
    int i = 0;

    while (par[i].length != 0) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        i++;
    }
    return 0;
}
