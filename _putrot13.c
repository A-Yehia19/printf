#include <stdlib.h>
#include "main.h"

/**
 * _putrot13 - writes string rotated 13 places to stdout
 * @str: The string to print
 *
 * Return: On success length of string.
 */
int _putrot13(char *str)
{
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i] + 13);

		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13);
		
		else
			_putchar(str[i]);
	}

	return (i);
}
