/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** check_type.c
*/

#include "../include/my.h"

int check_type2(char *type, int i, va_list list)
{
    for (; type[i] != '\0'; i += 1) {
        switch (type[i])
        {
            case 'o' : nb_to_octal(va_arg(list, int));
                return (i);
            case 'u' : my_put_uns_nbr(va_arg(list, int));
                return (i);
            case 'X' : nb_to_hexadecimal_for_maj(va_arg(list, int));
                return (i);
            case 'x' : nb_to_hexadecimal_for_min(va_arg(list, int));
                return (i);
            case '%' : my_putchar('%');
                return (i);
            default :
                return (84);
        }
    }
    return (i);
}

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
            case 'S' : str_to_octal(va_arg(list, char *));
                return (i);
            default :
                check_type2(type, i, list);
        }
    }
    return (i);
}
