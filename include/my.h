/*
** EPITECH PROJECT, 2021
** B-PSU-100-MAR-1-1-myprintf-thibaut.tran
** File description:
**  bsprintf.h
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#ifndef my_printf_h_
#define my_printf_h_

void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
int my_strlen(char const *str);
void my_printf(char *s, ...);
int check_type(char *type, int i, va_list list);
int check_back_slash(char *type, int i);

#endif