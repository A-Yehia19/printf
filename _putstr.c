#include <stdlib.h>
#include "main.h"

/**
 * _putstr - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success length of string.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putstr(char* str)
{
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
