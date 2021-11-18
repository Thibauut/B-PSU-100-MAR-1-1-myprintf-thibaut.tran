/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** check_spaces_left.c
*/

#include "../include/my.h"
#define ctoi(x) ((x) - 48)
#define itoc(x) ((x) + 48)

int type_spaces_left2(char *type, int i, va_list tmp_list, int size)
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
    return (size);
}

int type_spaces_left(char *type, int i, va_list tmp_list, int size)
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

int check_spaces_left(char *type, int i, va_list tmp_list, int stock, verif diese)
{
    int nb = stock, size = 1;
    size = type_spaces(type, i, tmp_list, size);
    if ((diese == true && type[i] == 'o'))
        size += 1;
    if ((diese == true && type[i] == 'x') || (diese == true && type[i] == 'X'))
        size += 2;
    while (nb - size > 0) {
        nb -= 1;
        my_putchar(' ');
    }
    return (i);
}

int spaces_left(char *type, int i, va_list tmp_list, va_list list, verif diese)
{
    i += 1;
    int stock = my_getnbr(type);
    while (type[i] <= '9' && type[i] >= '0')
        i += 1;
    if (diese == true)
        i = check_hashtag(type, i, tmp_list, list);
    i = check_type(type, i, list);
    i = check_spaces_left(type, i, tmp_list, stock, diese);
    return (i);
}