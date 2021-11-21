/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_func_lib.c
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    if (str == NULL)
        exit (84);
    for (int i = 0; str[i]; i += 1) {
        write(1, &str[i], 1);
    }
}

char *my_strdup(char *src)
{
    int a = 0;
    char *rep;
    int size = 0;
    while (src[size] != '\0')
        size++;
    rep = malloc(sizeof(char) * size + 1);
    while (src[a] != '\0') {
        rep[a] = src[a];
        a = a + 1;
    }
    if (size > a)
        rep[a] = '\0';
    return (rep);
}

int my_strlen(char *str)
{
    int i = 0;
    for (; str[i]; i += 1);
    return i;
}

int my_getnbr(char *str)
{
    int a = 0;
    int nb = 0;
    while (str[a] != '\0' && (str[a] < '0' || str[a] > '9')) {
        if (a == my_strlen(str))
            return (0);
        a++;
    }
    while (str[a] != '\0' && (str[a] >= '0' && str[a] <= '9')) {
        nb = nb * 10 + str[a] - 48;
        a++;
    }
    if (nb > 2147483647 || nb < -2147483647)
        return (0);
    return (nb);
}
