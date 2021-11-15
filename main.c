/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** main.c
*/

#include "include/my.h"

int main(void)
{
    my_printf("^%s%%%i%s\n", "astek", 42, "moulinettes");
    my_putchar('\n');
    printf("^%s%%%i%s\n", "astek", 42, "moulinettes");
    my_printf("^nombre 2 = %-13p\n nombre 1 =%+12d\n", "ee", 23);
    my_putchar('\n');
    printf("^nombre 2 = %-13p\n nombre 1 =%+  12d\n", "ee", 23);
}