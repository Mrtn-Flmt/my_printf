/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Include file containing all the necessary prototypes.
*/

#include <stdarg.h>

void my_putchar(char c);

void my_put_nbr(int nb);

void my_putstr(char *str);

void my_printf_str(va_list *my_list);

void my_printf_char(va_list *my_list);

void my_printf_nbr(va_list *my_list);

int my_printf(char *src, ...);

int my_printf_bin(va_list *my_list);