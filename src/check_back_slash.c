/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** check_back_slash.c
*/

#include "../include/my.h"

int check_back_slash(char *type, int i)
{
    for (; type[i] != '\0'; i += 1) {
        if (type[i] == 'n') {
            my_putchar('\n');
            return (i);
        }
        if (type[i] == 't') {
            my_putchar('\t');
            return (i);
        }
        if (type[i] == 'b') {
            my_putchar('\b');
            return (i);
        }
    }
    return (i);
}