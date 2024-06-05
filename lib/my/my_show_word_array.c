/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** Prints all word in an array (tab)
*/

#include <stdlib.h>
#include "my.h"

int my_show_word_array(char *const *tab)
{
    int index_tab = 0;

    while (tab[index_tab] != NULL) {
        my_putstr(tab[index_tab]);
        my_putchar('\n');
        index_tab = index_tab + 1;
    }
    return 0;
}
