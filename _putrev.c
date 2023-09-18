#include <stdlib.h>
#include "main.h"

/**
 * _putrev_withCounter - writes string in reverse
 * @str: The number to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putrev_withCounter(char *str, int *i)
{
	if (*str == '\0')
		return;

	_putrev_withCounter(str + 1, i);
	_putchar(*str);
	*i += 1;
}

/**
 * _putrev - writes string in reverse
 * @str: The string to print
 *
 * Return: On success length of string.
 */
int _putrev(char *str)
{
	int i;

	if (!str)
		str = ")llun(";

	_putrev_withCounter(str, &i);
	return (i);
}
