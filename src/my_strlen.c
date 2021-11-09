/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_strlen.c
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i += 1);
    return i;
}