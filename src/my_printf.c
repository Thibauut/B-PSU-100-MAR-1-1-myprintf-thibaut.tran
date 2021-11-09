/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** disp_stdarg.c
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

int check_back_slash(char *type, int i)
{
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == 'n') {
            my_putchar('\n');
            return (i);
        }
        if (type[i] == 't') {
            my_putstr("    ");
            return (i);
        }
    }
    return (i);
}

void my_printf(char *type, ...)
{
    va_list list;
    int i = 0;
    va_start (list, type);

    for (; type[i] != '\0'; i += 1) {
        if (type[i] == '%') {
            i += 1;
            check_type(type, i, list);
        }
        else if (type[i] == 92)
            i += 1;
        else
            my_putchar(type[i]);
    }
    va_end (list);
    return;
}