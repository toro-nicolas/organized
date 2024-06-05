/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** Returns the power (p) of the number (nb)
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p > 0) {
        result = nb;
        result = result * my_compute_power_rec(nb, p - 1);
    } else if (p == 0) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
