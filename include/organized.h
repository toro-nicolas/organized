/*
** EPITECH PROJECT, 2023
** bsorganized
** File description:
** The bs_organized.h
*/

#include <stdlib.h>
#include "shell.h"
#include "my.h"

#ifndef BS_ORGANIZED_H_
    #define BS_ORGANIZED_H_

typedef struct workshop_s {
    char *type;
    int id;
    char *name;
    struct workshop_s *next;
} workshop_t;

void sort_by(workshop_t **list, int sort_type, int *already_sorted);

#endif /* BS_ORGANIZED_H_ */
