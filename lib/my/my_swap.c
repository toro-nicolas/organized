/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** Swap the value of two integer (a and b)
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
