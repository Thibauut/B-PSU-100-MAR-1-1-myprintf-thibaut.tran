/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** check_type.c
*/

#include "../include/my.h"

int check_type(char *type, int i, va_list list)
{
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == 'c') {
            my_putchar(va_arg(list, int));
            return (i);
        }
        if (type[i] == 's') {
            my_putstr(va_arg(list, char *));
            return (i);
        }
        if (type[i] == 'i') {
            my_put_nbr(va_arg(list, int));
            return (i);
        }
    }
    return (i);
}