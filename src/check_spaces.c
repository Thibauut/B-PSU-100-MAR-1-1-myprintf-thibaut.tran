/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** check_spaces.c
*/

#include "../include/my.h"
#define ctoi(x) ((x) - 48)
#define itoc(x) ((x) + 48)

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
    return (size);
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

int check_spaces(char *type, int i, va_list tmp_list, verif diese, va_list list, verif add)
{
    int nb = 0, size = 1;
    while (type[i] <= 57 && type[i] >= 48) {
        nb  = nb + ctoi(type[i]);
        nb = nb * 10;
        i += 1;
    }
    nb = nb / 10;
    size = type_spaces(type, i, tmp_list, size);
    if ((diese == true && type[i] == 'o'))
        size += 1;
    if ((diese == true && type[i] == 'x') || (diese == true && type[i] == 'X'))
        size += 2;
    if ((add == true && type[i] == 'd') || (add == true && type[i] == 'i'))
        size += 1;
    while (nb - size > 0) {
        nb -= 1;
        my_putchar(' ');
    }
    if (add == true)
        check_add(type, i, tmp_list, list);
    if (diese == true)
        check_hashtag(type, i, tmp_list, list);
    return (i);
}