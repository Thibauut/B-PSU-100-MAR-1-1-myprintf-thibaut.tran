/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_putchar.c
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}