/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
** my_strcpy.c
*/

#include "../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;
    while (src[a] != '\0') {
        dest[a] = src [a];
        a = a + 1;
    }
    dest[a] = src[a];
    return (dest);
}
