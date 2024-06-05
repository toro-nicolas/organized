/*
** EPITECH PROJECT, 2023
** organized
** File description:
** The del.c
*/

#include "organized.h"

static int is_number(char c)
{
    if (c > 47 && c < 58)
        return 1;
    return 0;
}

static void detect_number(int *enable, char const *buffer, int *index, int *c)
{
    if (*enable == 0 && is_number(buffer[*c]) == 1) {
        *enable = 1;
        *index = *c;
    }
    while (*enable == 1 && *c != 0 &&
    (buffer[*c - 1] == '+' || buffer[*c - 1] == '-')) {
        *index = *index - 1;
        *c = *c - 1;
    }
}

static int check_no_number(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_number(str[i]) == 1)
            return 0;
    }
    return 1;
}

static int get_id(char const *id_str)
{
    char *temp = malloc(sizeof(char) * (my_strlen(id_str) + 1));
    int enable = 0;
    int index = 0;
    int c = 0;

    if (check_no_number(id_str))
        return -1;
    for (; id_str[c] != '\0'; c++) {
        detect_number(&enable, id_str, &index, &c);
        if (enable == 1 || enable == 2) {
            enable = 2;
            temp[c - index] = id_str[c];
        }
    }
    temp[c] = '\0';
    if (my_getnbr(temp) < 0)
        return -1;
    else
        return my_getnbr(temp);
}

static int print_delete(workshop_t *tmp)
{
    my_printf("%s n°%d - \"%s\" deleted.\n", tmp->type, tmp->id, tmp->name);
    free(tmp->type);
    free(tmp->name);
    free(tmp);
    return 0;
}

static int delete_material(workshop_t **workshop, int start, int id)
{
    workshop_t *tmp = *workshop;
    workshop_t *previous_node = *workshop;

    for (; tmp != NULL && tmp->type != NULL; tmp = tmp->next) {
        if (start == 1 && tmp->id == id) {
            *workshop = tmp->next;
            return print_delete(tmp);
        }
        if (tmp->id == id) {
            previous_node->next = tmp->next;
            print_delete(tmp);
            tmp = previous_node;
            return 0;
        }
        if (start == 0)
            previous_node = previous_node->next;
        start = 0;
    }
    return 84;
}

int del(void *data, char **args)
{
    if ((*(workshop_t **)data)->type == NULL) {
        my_putstr_error("The list is empty\n");
        return 84;
    }
    for (int index = 0; args[index] != NULL; index++) {
        if (delete_material((workshop_t **)data, 1, get_id(args[index]))) {
            my_putstr_error("Invalid ID\n");
            return 84;
        }
    }
    return 0;
}
