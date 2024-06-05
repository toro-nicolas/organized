/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** Returns a int number starting from a char number (str)
*/

#include "my.h"

static int put_number_2(int result, char c)
{
    if (result != 0) {
        result = (result * 10) + (c - 48);
    } else {
        result = c - 48;
    }
    return result;
}

static int put_number_1(int *error, int *signe, int result, char c)
{
    if (*signe == -1 && ((result * 10) + (c - 48)) == -2147483648) {
        result = -2147483648;
    } else if ((result * 10) + (c - 48) >= 0) {
        result = put_number_2(result, c);
    } else {
        *error = 1;
    }
    return result;
}

static int char_to_int(int *letter_detected, char c, int *signe)
{
    if (c == '-' || c == '+') {
        if (c == '-') {
            *signe = - *signe;
        }
    } else {
        *letter_detected = 1;
    }
    return (0);
}

static int check_result(int result, int *error, int *signe)
{
    if (*error == 1) {
        result = 0;
    } else {
        result = result * *signe;
    }
    return result;
}

int my_getnbr(char const *str)
{
    int result = 0;
    int len = 0;
    int i = 0;
    int signe = 1;
    int *ptr_signe = &signe;
    int letter_detected = 0;
    int *ptr_letter_detected = &letter_detected;
    int error = 0;
    int *ptr_error = &error;

    len = my_strlen(str);
    while (letter_detected == 0 && error == 0 && i < len) {
        if (str[i] > 47 && str[i] < 58) {
            result = put_number_1(ptr_error, ptr_signe, result, str[i]);
        } else {
            char_to_int(ptr_letter_detected, str[i], ptr_signe);
        }
        i++;
    }
    return check_result(result, ptr_error, ptr_signe);
}
