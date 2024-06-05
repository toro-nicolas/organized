/*
** EPITECH PROJECT, 2023
** my list
** File description:
** struct of linked list
*/

#ifndef MYLIST_H
    #define MYLIST_H
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;
linked_list_t *my_params_to_list(int ac, char *const *av);
int push_front(linked_list_t **cabine, void *data);
int my_list_size(linked_list_t const *begin);
void my_rev_list(linked_list_t **begin);
int my_show_list(linked_list_t *liste);
int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));
int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(),
    void const *data_ref, int (*cmp) ());
linked_list_t *my_find_node(linked_list_t const *begin,
    void const *data, int (*cmp) ());
int my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)());
void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);
void my_sort_list(linked_list_t **begin, int (*cmp) ());
void sorting_l(linked_list_t **ref, linked_list_t **rest,
    char *temp, int(*cmp) ());
int my_strput(char const *str);
void my_charput(char c);
int my_nbr_put(int nb);
int my_data_put(void *nb);

#endif
