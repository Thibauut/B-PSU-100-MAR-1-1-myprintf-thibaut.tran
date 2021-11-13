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
    va_list list, tmp_list;
    int i = 0;
    va_start(tmp_list, type), va_start(list, type);
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == '%') {
            i += 1;
            while (type[i] == ' ')
                i += 1;
            va_copy(tmp_list, list);
            if (type[i] <= '9' && type[i] >= '0')
                i = check_spaces(type, i, tmp_list);
            i = check_type(type, i, list);
            if (i == 84)
                return 84;
        } else
            my_putchar(type[i]);
    }
    va_end(tmp_list), va_end(list);
    return (0);
}

int type_spaces2(char *type, int i, va_list tmp_list, int size)
{
    if (type[i] == 'x' || type[i] == 'X') {
        unsigned int uns_tmp = nb_to_hexadecimal_size(va_arg(tmp_list, int));
        size = uns_tmp;
    }
    if (type[i] == 'o') {
        unsigned int uns_tmp = nb_to_octal_size(va_arg(tmp_list, int));
        size = uns_tmp;
    }
    if (type[i] == 'u') {
        unsigned int uns_tmp = va_arg(tmp_list, int);
        size = my_nblen_uns(uns_tmp);
    }
    return(size);
}

int type_spaces(char *type, int i, va_list tmp_list, int size)
{
    if (type[i] == 's' || type[i] == 'S') {
        char *char_tmp = my_strdup(va_arg(tmp_list, char *));
        size = my_strlen(char_tmp);
    }
    if (type[i] == 'i' || type[i] == 'd') {
        int int_tmp = va_arg(tmp_list, int);
        size = my_nblen(int_tmp);
    }
    if (type[i] == 'b') {
        unsigned int uns_tmp = nb_to_binary_size(va_arg(tmp_list, int));
        size = uns_tmp;
    }
    return (type_spaces2(type, i, tmp_list, size));
}

int check_spaces(char *type, int i, va_list tmp_list)
{
    int nb = 0, size = 1;
    while (type[i] <= 57 && type[i] >= 48) {
        nb  = nb + ctoi(type[i]);
        nb = nb * 10;
        i += 1;
    }
    nb = nb / 10;
    size = type_spaces(type, i, tmp_list, size);
    while (nb - size > 0) {
        nb -= 1;
        my_putchar(' ');
    }
    return (i);
}