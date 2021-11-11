/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** nb_to_octal.c
*/

#include "../include/my.h"

#define ctoi(x) ((x) - 48)

#define itoc(x) ((x) + 48)

void str_to_octal2(char *str, int i)
{
    int *oct_str = malloc(sizeof(int) * 1000);
    int j = 0;
    int stock_str = str[i];
    while (stock_str > 0) {
        oct_str[j] = stock_str % 8;
        stock_str = stock_str / 8;
        j += 1;
    }
    if (str[i] < 32) {
        if (str[i] < 8) {
            oct_str[j] = 0;
            j += 1;
            oct_str[j] = 0;
        }
        oct_str[j] = 0;
    }
    for (; j >= 0; j -= 1)
        my_put_nbr(oct_str[j]);
    return;
}

void str_to_octal(char *str)
{
    for (int i = 0; str[i]; i += 1) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            str_to_octal2(str, i);
        }
        else
            write(1, &str[i], 1);
    }
    return;
}

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