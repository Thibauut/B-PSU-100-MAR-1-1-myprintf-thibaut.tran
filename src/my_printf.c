/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_printf.c
*/

#include "../include/my.h"
#define ctoi(x) ((x) - 48)
#define itoc(x) ((x) + 48)

int my_printf(char *type, ...)
{
    va_list list, tmp_list;
    int i = 0;
    verif diese = false, add = false;
    va_start(tmp_list, type), va_start(list, type);
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == '%') {
            i += 1;
            va_copy(tmp_list, list);
            if (type[i] == ' ') {
                while (type[i] == ' ')
                i += 1;
            }
            if (type[i] == '#') {
                while (type[i + 1] == '#')
                    i += 1;
                diese = true;
                i += 1;
                if (type[i] == ' ') {
                    while (type[i] == ' ')
                        i += 1;
                }
                check_hashtag(type, i, tmp_list, list);
            }
            if (type[i] == '+') {
                while (type[i + 1] == '+')
                    i += 1;
                add = true;
                i += 1;
                if (type[i] == ' ') {
                    while (type[i] == ' ')
                    i += 1;
                }
                check_add(type, i, tmp_list, list);
            }
            if (type[i] == '-') {
                while (type[i + 1] == '-')
                    i += 1;
                if (type[i + 1] == '#' || type[i + 1] == '+')
                    i += 1;
                i = check_neg(type, i, tmp_list, list, diese);
                diese = false;
                continue;
            }
            if ((type[i] <= '9' && type[i] >= '0'))
                i = check_spaces(type, i, tmp_list, diese, list, add);
            i = check_type(type, i, list);
            diese = false, add = false;
            if (i == 84)
                return 84;
        } else
            my_putchar(type[i]);
    }
    va_end(tmp_list), va_end(list);
    return (0);
}

int check_add(char *type, int i, va_list tmp_list, va_list list)
{
    switch (type[i]) {
        case 'i' : my_putchar('+');
            return (i);
        case 'd' : my_putchar('+');
            return (i);
    }
    return (i);
}

int check_hashtag(char *type, int i, va_list tmp_list, va_list list)
{
    switch (type[i]) {
        case 'o' : my_putchar('0');
            return (i);
        case 'x' : my_putstr("0x");
            return (i);
        case 'X' : my_putstr("0X");
            return (i);
        default :
            return (i);
    }
    return (i);
}

int check_neg(char *type, int i, va_list tmp_list, va_list list, verif diese)
{
    if (type[i] == '-')
        i = spaces_left(type, i, tmp_list, list, diese);
    return (i);
}