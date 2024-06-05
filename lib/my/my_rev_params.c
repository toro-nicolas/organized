/*
** EPITECH PROJECT, 2023
** day07
** File description:
** Task05
*/

#include "my.h"

void my_rev_params(int argc, char **argv)
{
    for (int i = argc; i > 0; i--) {
        my_putstr(argv[i - 1]);
        my_putstr("\n");
    }
}
