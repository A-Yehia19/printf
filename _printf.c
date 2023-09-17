#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - same as printf function
 * @format: string to print
 * Returns: the number of characters printed (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
    va_list args;
    int len, i;

    va_start(args, format);

    len = 0;
    for (i = 0; format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                len += _putchar(va_arg(args, int));
            
            else if (format[i] == 's')
                len += _putstr(va_arg(args, char *));
            
            else if (format[i] == '%')
                len += _putchar('%');

            else if (format[i] == 'd' || format[i] == 'i')
                len += _putnum(va_arg(args, int));
        }
        else
            len += _putchar(format[i]);
    }

    va_end(args);
    return (len);
}
