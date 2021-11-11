/*
** EPITECH PROJECT, 2021
** B-CPE-101-MAR-1-1-bistromatic-mohamed.mansour
** File description:
** my_putstr.c
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i += 1)
        write(1, &str[i], 1);
}