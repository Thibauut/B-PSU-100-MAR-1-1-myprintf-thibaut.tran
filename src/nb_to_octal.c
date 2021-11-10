/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** nb_to_octal.c
*/

#include "../include/my.h"

int nb_to_octal(unsigned int nb)
{
    int i = 0;
    int *oct_nb = malloc(sizeof(int) * (nb + 1));
    while (nb > 0) {
        oct_nb[i] = nb % 8;
        nb = nb / 8;
        i += 1;
    }
    i -= 1;
    for (; i >= 0; i -= 1)
        my_put_nbr(oct_nb[i]);
    return (i);
}