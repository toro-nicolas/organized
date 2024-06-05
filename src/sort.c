/*
** EPITECH PROJECT, 2023
** organized
** File description:
** The sort.c
*/

#include "organized.h"

static int find_sort_type(char **args, int index)
{
    if (my_strcmp(args[index], "TYPE") == 0 &&
    args[index + 1] != NULL && my_strcmp(args[index + 1], "-r") == 0)
        return 0;
    if (my_strcmp(args[index], "TYPE") == 0)
        return 1;
    if (my_strcmp(args[index], "ID") == 0 &&
    args[index + 1] != NULL && my_strcmp(args[index + 1], "-r") == 0)
        return 2;
    if (my_strcmp(args[index], "ID") == 0)
        return 3;
    if (my_strcmp(args[index], "NAME") == 0 &&
    args[index + 1] != NULL && my_strcmp(args[index + 1], "-r") == 0)
        return 4;
    if (my_strcmp(args[index], "NAME") == 0)
        return 5;
    return -1;
}

static int update_index(int index, int sort_type, int **already_sorted)
{
    (*already_sorted)[sort_type / 2] = 1;
    if (sort_type == 0 || sort_type == 2 || sort_type == 4)
        return index + 1;
    return index;
}

int sort(void *data, char **args)
{
    int sort_type = 0;
    int *already_sorted = malloc(sizeof(int) * 3);

    already_sorted[0] = 0;
    already_sorted[1] = 0;
    already_sorted[2] = 0;
    for (int index = 0; args[index] != NULL; index++) {
        sort_type = find_sort_type(args, index);
        if (sort_type != -1) {
            sort_by((workshop_t **)data, sort_type, already_sorted);
            index = update_index(index, sort_type, &already_sorted);
            continue;
        }
        my_putstr_error("Invalid sort\n");
        return 84;
    }
    return 0;
}
