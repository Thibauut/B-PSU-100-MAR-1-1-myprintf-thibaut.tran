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
        switch (type[i])
        {
            case 'c' : my_putchar(va_arg(list, int));
                return (i);
            case 's' : my_putstr(va_arg(list, char *));
                return (i);
            case 'i' : my_put_nbr(va_arg(list, int));
                return (i);
            case 'd' : my_put_nbr(va_arg(list, int));
                return (i);
            case 'b' : nb_to_binary(va_arg(list, int));
                return (i);
            case 'S' : my_super_putstr(va_arg(list, char *));
                return (i);
        }
    }
    return (i);
}