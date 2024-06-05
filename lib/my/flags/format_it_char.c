/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flag to print a %c (a char)
*/

#include <stdarg.h>
#include "my.h"
#include "myformats.h"

void format_it_char(char *str_finale,
    formating_t *formating, char c)
{
    void (*format[])(char *, formating_t *, char c) =
        {&format_moins_char, &format_plus_char,
        &format_esp_char, &format_hash_char, &format_zero_char};

    if (formating->id_ft == -1 && formating->id_wd != -1) {
        format[2](str_finale, formating, c);
    }
    for (int i = 0; i < 5; i++) {
        if (formating->id_ft == i) {
            format[i](str_finale, formating, c);
        }
    }
    return;
}
