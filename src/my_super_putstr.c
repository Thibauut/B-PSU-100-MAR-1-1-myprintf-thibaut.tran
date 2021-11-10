/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_super_putstr.c
*/

#include "../include/my.h"

#define ctoi(x) ((x) - 48)

#define itoc(x) ((x) + 48)

void my_super_putstr(char *str)
{
    for (int i = 0; str[i]; i += 1) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            str_to_octal(str, i);
        }
        else
            write(1, &str[i], 1);
    }
    return;
}

