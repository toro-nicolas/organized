/*
** EPITECH PROJECT, 2023
** my_compute_power_rec_size_t
** File description:
** Returns the power (p) of the number (nb)
*/

#include <stddef.h>

size_t my_compute_power_rec_size_t(int nb, int p)
{
    size_t result;

    if (p > 0) {
        result = nb;
        result = result * my_compute_power_rec_size_t(nb, p - 1);
    } else if (p == 0) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
