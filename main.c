/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "./include/my.h"

int main()
{
    char *first_name = "Martin";
    char *last_name = "FLAMENT";
    int age = 24;
    int x = 42;

    my_printf("Hello %s %s %n %b", first_name, last_name, age, x);
    return (0);
}