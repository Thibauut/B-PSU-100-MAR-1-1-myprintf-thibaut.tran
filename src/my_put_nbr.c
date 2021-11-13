/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_put_nbr.c
*/

#include "../include/my.h"

void my_putchar(char c);

void my_put_nbr(int nb)
{
    int a;
    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0)
    {
        if (nb >= 10)
        {
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbr(nb);
            my_putchar(48 + a);
        }
        else
            my_putchar(48 + nb % 10);
    }
}
