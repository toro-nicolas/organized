/*
** EPITECH PROJECT, 2023
** organized
** File description:
** The sort_by_name.c
*/

#include "organized.h"

/*1 = Déjà triée | 0 = On modifie l'ordre*/
static int compare_by_type_reverse(workshop_t *left_part,
    workshop_t *right_part, int *already_sorted)
{
    if (my_strcmp(left_part->type, right_part->type) < 0 &&
    already_sorted[1] == 0 &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[2] == 1 &&
    my_strcmp(left_part->name, right_part->name) == 0)))
        return 0;
    return 1;
}

static int compare_by_type(workshop_t *left_part, workshop_t *right_part,
    int *already_sorted)
{
    if (my_strcmp(left_part->type, right_part->type) > 0 &&
    already_sorted[1] == 0 &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[2] == 1 &&
    my_strcmp(left_part->name, right_part->name) == 0)))
        return 0;
    return 1;
}

static int compare_by_id_reverse(workshop_t *left_part,
    workshop_t *right_part, int *already_sorted)
{
    if (left_part->id < right_part->id &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[0] == 1 &&
    my_strcmp(left_part->type, right_part->type) == 0) &&
    (already_sorted[2] == 1 &&
    my_strcmp(left_part->name, right_part->name) == 0)))
        return 0;
    return 1;
}

static int compare_by_id(workshop_t *left_part, workshop_t *right_part,
    int *already_sorted)
{
    if (left_part->id > right_part->id &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[0] == 1 &&
    my_strcmp(left_part->type, right_part->type) == 0) &&
    (already_sorted[2] == 1 &&
    my_strcmp(left_part->name, right_part->name) == 0)))
        return 0;
    return 1;
}

static int compare_by_name_reverse(workshop_t *left_part,
    workshop_t *right_part, int *already_sorted)
{
    if (my_strcmp(left_part->name, right_part->name) < 0 &&
    already_sorted[1] == 0 &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[0] == 1 &&
    my_strcmp(left_part->type, right_part->type) == 0)))
        return 0;
    return 1;
}

static int compare_by_name(workshop_t *left_part, workshop_t *right_part,
    int *already_sorted)
{
    if (my_strcmp(left_part->name, right_part->name) > 0 &&
    already_sorted[1] == 0 &&
    ((already_sorted[0] == 0 && already_sorted[1] == 0 &&
    already_sorted[2] == 0) ||
    (already_sorted[0] == 1 &&
    my_strcmp(left_part->type, right_part->type) == 0)))
        return 0;
    return 1;
}

void split_list(workshop_t *list,
    workshop_t **left_part, workshop_t **right_part)
{
    workshop_t *entire_list = list->next;
    workshop_t *middle_list = list;

    while (entire_list != NULL) {
        entire_list = entire_list->next;
        if (entire_list != NULL) {
            middle_list = middle_list->next;
            entire_list = entire_list->next;
        }
    }
    *left_part = list;
    *right_part = middle_list->next;
    middle_list->next = NULL;
}

static workshop_t *check_null(workshop_t *left_part, workshop_t *right_part)
{
    if (left_part == NULL)
        return right_part;
    if (right_part == NULL)
        return left_part;
    return NULL;
}

workshop_t *compare_list(workshop_t *left_part, workshop_t *right_part,
    int sort_type, int *already_sorted)
{
    int (*COMPARE_FUNCTIONS[])(workshop_t *, workshop_t *, int *) = {
        &compare_by_type_reverse, &compare_by_type, &compare_by_id_reverse,
        &compare_by_id, &compare_by_name_reverse, &compare_by_name};
    workshop_t *new_list = NULL;

    if (check_null(left_part, right_part) != NULL)
        return check_null(left_part, right_part);
    if (COMPARE_FUNCTIONS[sort_type](left_part, right_part, already_sorted)) {
        new_list = left_part;
        new_list->next = compare_list(left_part->next, right_part,
            sort_type, already_sorted);
    } else {
        new_list = right_part;
        new_list->next = compare_list(left_part, right_part->next,
            sort_type, already_sorted);
    }
    return new_list;
}

void sort_by(workshop_t **list, int sort_type, int *already_sorted)
{
    workshop_t *left_part = malloc(sizeof(workshop_t));
    workshop_t *right_part = malloc(sizeof(workshop_t));

    if (*list == NULL || (*list)->next == NULL)
        return;
    split_list(*list, &left_part, &right_part);
    sort_by(&left_part, sort_type, already_sorted);
    sort_by(&right_part, sort_type, already_sorted);
    *list = compare_list(left_part, right_part, sort_type, already_sorted);
}
