/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The main.c
*/

#include "organized.h"

int main(void)
{
    workshop_t *workshop = malloc(sizeof(workshop_t));

    workshop->type = NULL;
    workshop->id = 0;
    workshop->name = NULL;
    workshop->next = NULL;
    return workshop_shell(&workshop);
}
