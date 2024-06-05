/*
** EPITECH PROJECT, 2023
** my_compute_square_root
** File description:
** square root of int in iterative
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb == 0)
        return 0;
    while (i * i <= nb) {
        if (nb / i == i
            && nb % i == 0) {
            return i;
        }
        i++;
    }
    return 0;
}
