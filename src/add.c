/*
** EPITECH PROJECT, 2023
** organized
** File description:
** The add.c
*/

#include "organized.h"

int check_arg_is_valid(char *type, char *name)
{
    if (type == NULL || name == NULL)
        return 0;
    if (my_strcmp(type, "ACTUATOR") == 0 || my_strcmp(type, "DEVICE") == 0 ||
    my_strcmp(type, "PROCESSOR") == 0 || my_strcmp(type, "SENSOR") == 0 ||
    my_strcmp(type, "WIRE") == 0)
        return 1;
    return 0;
}

static int get_best_id(workshop_t *workshop)
{
    int best_id = 0;
    workshop_t *tmp = workshop;

    for (; tmp != NULL; tmp = tmp->next) {
        if (tmp->id > best_id)
            best_id = tmp->id;
    }
    return best_id;
}

static int add_first_material(workshop_t *workshop, char **args)
{
    if (check_arg_is_valid(args[0], args[1])) {
        workshop->type = my_strdup(args[0]);
        workshop->name = my_strdup(args[1]);
        my_printf("%s n°%d - \"%s\" added.\n", workshop->type, workshop->id,
            workshop->name);
        return 0;
    } else {
        my_putstr_error("Invalid material\n");
        return 1;
    }
}

static int add_material(workshop_t **workshop, char **args, int *index)
{
    workshop_t *tmp = malloc(sizeof(workshop_t));

    if (check_arg_is_valid(args[*index], args[*index + 1])) {
        tmp->type = my_strdup(args[*index]);
        tmp->id = get_best_id(*workshop) + 1;
        tmp->name = my_strdup(args[*index + 1]);
        my_printf("%s n°%d - \"%s\" added.\n", tmp->type, tmp->id, tmp->name);
        tmp->next = *workshop;
        *workshop = tmp;
        return 0;
    } else {
        my_putstr_error("Invalid material\n");
        return 1;
    }
}

int add(void *data, char **args)
{
    int index = 0;
    workshop_t *workshop = *(workshop_t **)data;

    if (workshop->name == NULL) {
        if (add_first_material(workshop, args))
            return 84;
        index = index + 2;
    }
    for (; args[index] != NULL; index = index + 2) {
        if (add_material((workshop_t **)data, args, &index))
            return 84;
    }
    return 0;
}
