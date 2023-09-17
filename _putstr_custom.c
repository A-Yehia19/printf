#include <stdlib.h>
#include "main.h"

/**
 * _putstr_custom - writes string to stdout
 * @str: The string to print
 *
 * Return: On success length of string.
 */
int _putstr_custom(char *str)
{
	int i, special;

	if (!str)
		str = "(null)";

	special = 0;
	for (i = 0; str[i]; i++){
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			_puthex(str[i]);
			special ++;
		}
		else
			_putchar(str[i]);
	}

	return (i + special * 3);
}
