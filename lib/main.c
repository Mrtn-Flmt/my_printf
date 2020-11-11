#include "./include/my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libmy.a"

int main()
{
    int y = 23;
    int yz = 42;
    char first_name[] = "Martin";
    char *last_name = "FLAMENT";

    printf("\nJe m'appelle : %s %s\nJ'ai %d ans\n\n", first_name,last_name, y);
    
    my_printf("\nJe m'appelle : %s %s\nJ'ai %d ans\n\n", first_name,last_name, y, yz);


    my_printf("%b\n", yz);
    
    return (0);
}