/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my first printf with c language
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"

int find_i(char *tab, char element)
{
    int i = 0;

    for (i = 0; tab[i] != 0; i++) {
        if (tab[i] == element)
        return (i);                         // Le true
    }
    return (-1);                            // le false
}

int my_printf(char *src, ...)
{
    int count = 0;
    va_list my_list;
    int i = 0;
    int tmp_i;
    char tab_index[5] = {'s','c','d','0'};
    void (*tab_function[4]) (va_list *my_list) = {my_printf_str, my_printf_char, my_printf_nbr};
    va_start(my_list, src);

    for (i = 0; src[i] != '\0'; i++) {
        if (i != 0 && src[i - 1] == '%') {
            tmp_i = find_i(tab_index, src[i]);
            if (tmp_i != -1)
                (*tab_function[tmp_i]) (&my_list);
                count++;
        } else if (src[i] != '%')
            my_putchar(src[i]);
            count++;
    }
    return (count);
}
