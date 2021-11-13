/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** disp_stdarg.c
*/

#include "../include/my.h"
#define ctoi(x) ((x) - 48)
#define itoc(x) ((x) + 48)

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
            if (type[i] <= '9' && type[i] >= '0')
                check_nb(type, i);
            i = check_type(type, i, list);
            if (i == 84)
                return 84;
        }
        else {
            my_putchar(type[i]);
        }
    }
    va_end (list);
    return (0);
}

int check_nb(char *type, int i)
{
    int nb = 0;
    while (type[i] <= 57 && type[i] >= 48) {
        nb  = nb + ctoi(type[i]);
        nb = nb * 10;
        i += 1;
    }
    nb = nb / 10;
    while (nb > 0) {
        nb -= 1;
        my_putchar(' ');
    }
    return (i);
}