/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Include file containing all the necessary prototypes.
*/

#include <stdarg.h>

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

void my_printf_str(va_list *my_list);

void my_printf_char(va_list *my_list);

void my_printf_nbr(va_list *my_list);

int my_printf(char *src, ...);