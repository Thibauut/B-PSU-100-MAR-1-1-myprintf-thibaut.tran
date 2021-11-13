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
#include <string.h>

#ifndef my_printf_h_
#define my_printf_h_

void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char *str);
char *my_strdup(char *src);
int my_strlen(char *str);
int my_nblen(int nb);
unsigned int my_nblen_uns(unsigned int nb);
int my_printf(char *s, ...);
void my_put_uns_nbr(unsigned int nb);
int check_type(char *type, int i, va_list list);
int check_type2(char *type, int i, va_list list);
int check_spaces(char *type, int i, va_list tmp_list);
void str_to_octal(char *str);
void str_to_octal2(char *str, int i);
int nb_to_binary(unsigned int nb);
int nb_to_binary_size(unsigned int nb);
int nb_to_octal(unsigned int nb);
int nb_to_octal_size(unsigned int nb);
int nb_to_hexadecimal_for_maj(unsigned int nb);
int nb_to_hexadecimal_for_min(unsigned int nb);
int nb_to_hexadecimal_size(unsigned int nb);


#endif