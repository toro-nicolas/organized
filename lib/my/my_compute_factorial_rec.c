/*
** EPITECH PROJECT, 2023
** day05
** File description:
** Task02
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0 || nb == 1) {
        return 1;
    } else if (nb > 1 && nb < 13) {
        return nb * my_compute_factorial_rec(nb - 1);
    } else {
        return 0;
    }
}
