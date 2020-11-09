/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my lib
*/

void my_putchar(char c);

void my_putstr (char const *str)
{
    while('\0' != *str){
        my_putchar(*str);
        str++;
    }
}