/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** task05
*/

#include "../include/my.h"

int my_strlen (char const *str);

int my_getnbr(char const *str)
{
    int a = 0, nb = 0;
    int neg = 1;
    double stock = 0;
    while (str[a] != '\0' && (str[a] < '0' || str[a] > '9')) {
        if (str[a] == '-')
            neg = neg * (-1);
        if (a == my_strlen(str))
            return (0);
        a++;
    }
    while (str[a] != '\0' && (str[a] >= '0' && str[a] <= '9')) {
        nb = nb * 10 + str[a] - 48;
        stock = stock * 10 + str[a] - 48;
        a++;
    }
    if (nb > 2147483647 || nb < -2147483647)
        return (0);
    if (nb < stock)
        return (0);
    return (nb * neg);
}
