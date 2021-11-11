/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** disp_stdarg.c
*/

#include "../include/my.h"

int my_printf(char *type, ...)
{
    va_list list;
    int i = 0;
    va_start (list, type);
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == '%') {
            i += 1;
            while (type[i] == ' ')
                i += 1;
            check_type(type, i, list);
        }
        else
            my_putchar(type[i]);
    }
    va_end (list);
    return (0);
}