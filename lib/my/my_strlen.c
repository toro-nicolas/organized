/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** Returns the lenght of a string (str)
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len = len + 1;
    }
    return (len);
}
