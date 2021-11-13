/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_put_to_hexadecimal.c
*/

#include "../include/my.h"
#define itoc(x) ((x) + 48)
#define itoc2(x) ((x) + 55)
#define itoc3(x) ((x) + 87)

int nb_to_hexadecimal_for_maj(unsigned int nb)
{
    int i = 0;
    int stock_nb = 0;
    char *hexa_nb = malloc(sizeof(char) * 1000);
    while (nb > 0) {
        stock_nb = nb % 16;
        nb = nb / 16;
        if (stock_nb < 10) {
            hexa_nb[i] = itoc(stock_nb);
            i += 1;
        }
        else {
            hexa_nb[i] = itoc2(stock_nb);
            i += 1;
        }
    }
    for (; i >= 0; i -= 1)
        my_putchar(hexa_nb[i]);
    return (i);
}

int nb_to_hexadecimal_for_min(unsigned int nb)
{
    int i = 0;
    int stock_nb = 0;
    char *hexa_nb = malloc(sizeof(char) * 1000);
    while (nb > 0) {
        stock_nb = nb % 16;
        nb = nb / 16;
        if (stock_nb < 10) {
            hexa_nb[i] = itoc(stock_nb);
            i += 1;
        }
        else {
            hexa_nb[i] = itoc3(stock_nb);
            i += 1;
        }
    }
    for (; i >= 0; i -= 1)
        my_putchar(hexa_nb[i]);
    return (i);
}

int nb_to_hexadecimal_size(unsigned int nb)
{
    int size = 0;
    int stock_nb = 0;
    char *hexa_nb = malloc(sizeof(char) * 1000);
    while (nb > 0) {
        stock_nb = nb % 16;
        nb = nb / 16;
        if (stock_nb < 10) {
            hexa_nb[size] = itoc(stock_nb);
            size += 1;
        }
        else {
            hexa_nb[size] = itoc2(stock_nb);
            size += 1;
        }
    }
    return (size);
}