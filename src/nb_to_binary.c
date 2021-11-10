/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** binary_conv.c
*/

#include "../include/my.h"

int nb_to_binary(unsigned int nb)
{
    int i = 0;
    int *bin_nb = malloc(sizeof(int) * (nb + 1));
    while (nb > 0) {
        bin_nb[i] = nb % 2;
        nb = nb / 2;
        i += 1;
    }
    i -= 1;
    for (; i >= 0; i -= 1)
        my_put_nbr(bin_nb[i]);
    return (i);
}