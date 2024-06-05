/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Header of all flags
*/

#include <stdarg.h>
#include "myformats.h"

#ifndef MYFLAGS_H_
    #define MYFLAGS_H_

int flag_c(va_list list, formating_t *);
int flag_s(va_list list, formating_t *);
int flag_d(va_list list, formating_t *);
int flag_i(va_list list, formating_t *);
int flag_p(va_list list, formating_t *);
int flag_o(va_list list, formating_t *);
int flag_u(va_list list, formating_t *);
int flag_x(va_list list, formating_t *);
int flag_bigx(va_list list, formating_t *);
int flag_e(va_list list, formating_t *);
int flag_bige(va_list list, formating_t *);
int flag_f(va_list list, formating_t *);
int flag_bigf(va_list list, formating_t *);
int flag_g(va_list list, formating_t *);
int flag_bigg(va_list list, formating_t *);
int flag_a(va_list list, formating_t *);
int flag_biga(va_list list, formating_t *);
int flag_n(va_list list, formating_t *, int len);
int flag_m(va_list list, formating_t *);
int flag_b(va_list list, formating_t *);
int flag_bigs(va_list list, formating_t *);
int flag_bigd(va_list list, formating_t *);
int flag_percent(va_list list, formating_t *);

int (*FLAGS[])(va_list, formating_t *) = {
    &flag_d,
    &flag_i,
    &flag_c,
    &flag_s,
    &flag_p,
    &flag_o,
    &flag_u,
    &flag_x,
    &flag_bigx,
    &flag_e,
    &flag_bige,
    &flag_f,
    &flag_bigf,
    &flag_g,
    &flag_bigg,
    &flag_a,
    &flag_biga,
    &flag_m,
    &flag_b,
    &flag_bigs,
    &flag_bigd,
    &flag_percent
};

#endif /* MYFLAGS_H_ */
