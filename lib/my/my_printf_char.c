/*
** EPITECH PROJECT, 2020
** my_printf_char.c
** File description:
** my_first printf_char in c
*/

#include <stdarg.h>

void my_putchar(char c);

void my_printf_char(va_list *my_list)
{
    char c = va_arg(*my_list, int);
    my_putchar(c);
}
