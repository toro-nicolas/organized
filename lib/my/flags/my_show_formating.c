/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Prints a formating structure (formating) in stdout
*/

#include "my.h"
#include "myformats.h"

void my_show_formating(formating_t *formating)
{
    my_putstr("Le formatage du flag est le suivant :");
    my_putstr("\nFORMATAGE: ");
    my_put_nbr(formating->id_ft);
    my_putstr("\nWIDHT: ");
    my_put_nbr(formating->id_wd);
    my_putstr("\nPRECISION: ");
    my_put_nbr(formating->id_prc);
    my_putstr("\nPRECISION NUMBER: ");
    my_put_nbr(formating->id_nb);
    my_putstr("\nSPECIFIER: ");
    my_put_nbr(formating->id_sp);
    my_putstr("\nFORMAT FINALE: ");
    my_putstr(formating->final_format);
    my_putstr("\nLE FLAG: ");
    my_putchar(formating->flag);
    my_putstr("\nNEXT CHARA: ");
    my_putchar(formating->next_chara);
    my_putchar('\n');
}
