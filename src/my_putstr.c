/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_putstr.c
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i += 1)
        write(1, &str[i], 1);
}