/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_nblen.c
*/

#include "../include/my.h"

int my_nblen(int nb)
{
    int size = 0;
    while (nb >= 1) {
        nb = nb / 10;
        size += 1;
    }
    return (size);
}

unsigned int my_nblen_uns(unsigned int nb)
{
    unsigned int size = 0;
    while (nb >= 1) {
        nb = nb / 10;
        size += 1;
    }
    return (size);
}