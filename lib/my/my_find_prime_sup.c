/*
** EPITECH PROJECT, 2023
** my_find_prime_sup
** File description:
** Returns the next prime number starting form a number (nb)
*/

static int is_prime(int nb)
{
    int prime = 1;
    int i = 0;

    if (nb <= 0 || nb == 4) {
        return 0;
    }
    for (i = 2; i < nb / 2; i++) {
        if (nb % i == 0) {
            prime = 0;
        }
    }
    return prime;
}

int my_find_prime_sup(int nb)
{
    int i = 0;

    if (nb <= 1) {
        return 2;
    }
    while (is_prime(nb + i) == 0) {
        i++;
    }
    return nb + i;
}
