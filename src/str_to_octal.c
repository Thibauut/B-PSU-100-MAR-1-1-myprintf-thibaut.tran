/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** str_to_octal.c
*/

#include "../include/my.h"

void str_to_octal(char *str, int i)
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