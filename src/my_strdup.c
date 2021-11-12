/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** header
*/

#include "../include/my.h"

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
