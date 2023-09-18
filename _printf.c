#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - same as printf function
 * @format: string to print
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
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
			
			else if (format[i] == 'b')
				len += _putbinary(va_arg(args, unsigned int));
			
			else if (format[i] == 'u')
				len += _putunsigned(va_arg(args, unsigned int));
			
			else if (format[i] == 'o')
				len += _putoctal(va_arg(args, unsigned int));
			
			else if (format[i] == 'x')
				len += _puthex(va_arg(args, unsigned int));
			
			else if (format[i] == 'X')
				len += _putHEX(va_arg(args, unsigned int));
			
			else if (format[i] == 'S')
				len += _putstr_custom(va_arg(args, char *));
			
			else if (format[i] == 'p')
				len += _putaddress(va_arg(args, void *));
			
			else if (format[i] == 'r')
				len += _putrev(va_arg(args, char *));
			
			else if (format[i] == 'R')
				len += _putrot13(va_arg(args, char *));
		}
		else
			len += _putchar(format[i]);
	}

	va_end(args);
	return (len);
}
