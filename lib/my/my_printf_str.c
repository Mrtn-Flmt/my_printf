#include <stdarg.h>

void my_putstr(char *str);

void my_printf_str(va_list *my_list)
{
    char *src = va_arg(*my_list, char*);
    my_putstr(src);
}