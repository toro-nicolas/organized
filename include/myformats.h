/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Header of all formats
*/

#include <stddef.h>
#include <stdarg.h>

#ifndef MYFORMATS_H_
    #define MYFORMATS_H_

    #define FORMATAGE "-+ #0"
    #define WIDTH "0123456789"
    #define PRECISION "."
    #define NUMBERS "0123456789"

typedef struct formating {
    int id_ft;
    int id_wd;
    int id_prc;
    int id_nb;
    int id_sp;
    int nb_format;
    char final_format[10];
    char next_chara;
    va_list *liste;
    int index_user;
    int id_us;
    char flag;
} formating_t;

typedef struct flags {
    char *str;
    int index_flag;
} flags_t;

typedef struct user {
    char const *str;
    int total_len;
    int i;
} user_t;

formating_t *find_first(user_t *user, int *i,
    formating_t *formating);
formating_t *find_width(user_t *user, int *i,
    formating_t *formating);
formating_t *find_precision(user_t *user, int *i,
    formating_t *formating);
formating_t *find_numbers(user_t *user, int *i,
    formating_t *formating);
formating_t *find_specifier(user_t *user, int *i,
    formating_t *formating);

void format_first(struct user *, struct flags *,
    struct formating *, int *i);
void format_width(user_t *user, flags_t *flgs,
    formating_t *formating, int *i);
void format_precision(user_t *user, flags_t *flgs,
    formating_t *formating, int *i);
void format_numbers(user_t *user, flags_t *flgs,
    formating_t *formating, int *i);
void format_specifier(user_t *user, flags_t *flgs,
    formating_t *formating, int *i);
void my_show_formating(formating_t *formating);

void format_plus_double(char *str_finale, formating_t *formating, double nb);
void format_moins_double(char *str_finale, formating_t *formating, double nb);
void format_esp_double(char *str_finale, formating_t *formating, double nb);
void format_hash_double(char *str_finale, formating_t *formating, double nb);
void format_zero_double(char *str_finale, formating_t *formating, double nb);
void format_it_double(char *str_finale,
    formating_t *formating, double partie_d);
void precise_it_double(char *str_finale,
    formating_t *formating, double partie_d);

void format_plus_int(char *str_finale,
    formating_t *formating, size_t nb);
void format_moins_int(char *str_finale,
    formating_t *formating, size_t nb);
void format_esp_int(char *str_finale,
    formating_t *formating, size_t nb);
void format_hash_int(char *str_finale,
    formating_t *formating, size_t nb);
void format_zero_int(char *str_finale,
    formating_t *formating, size_t nb);
void format_it_int(char *str_finale,
    formating_t *formating, size_t nb);
void precise_it_int(char *str_finale,
    formating_t *formating, size_t nb);

void format_plus_char(char *str_finale, formating_t *formating, char c);
void format_moins_char(char *str_finale, formating_t *formating, char c);
void format_esp_char(char *str_finale, formating_t *formating, char c);
void format_hash_char(char *str_finale, formating_t *formating, char c);
void format_zero_char(char *str_finale, formating_t *formating, char c);
void format_it_char(char *str_finale,
    formating_t *formating, char c);

void format_plus_str(char *str_finale, formating_t *formating);
void format_moins_str(char *str_finale, formating_t *formating);
void format_esp_str(char *str_finale, formating_t *formating);
void format_hash_str(char *str_finale, formating_t *formating);
void format_zero_str(char *str_finale, formating_t *formating);
void format_it_str(char *str_finale,
    formating_t *formating);

char *specify_it_int(formating_t *formating, size_t temp);
char *specify_it_base(formating_t *formating, size_t temp, char *);

#endif /* MYFORMATS_H_ */
