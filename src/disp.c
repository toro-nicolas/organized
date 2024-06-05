/*
** EPITECH PROJECT, 2023
** organized
** File description:
** The disp.c
*/

#include "organized.h"

int disp(void *data, char **args)
{
    for (workshop_t *tmp = *(workshop_t **)data;
    tmp != NULL && tmp->type != NULL; tmp = tmp->next)
        my_printf("%s n°%d - \"%s\"\n", tmp->type, tmp->id, tmp->name);
    return 0;
}
