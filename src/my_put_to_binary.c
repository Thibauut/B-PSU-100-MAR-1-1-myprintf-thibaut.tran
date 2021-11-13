/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_put_to_binary.c
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

int nb_to_binary_size(unsigned int nb)
{
    int size = 0;
    int *bin_nb = malloc(sizeof(int) * (nb + 1));
    while (nb > 0) {
        bin_nb[size] = nb % 2;
        nb = nb / 2;
        size += 1;
    }
    return (size);
}