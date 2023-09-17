#include <stdlib.h>
#include "main.h"

/**
 * _putnum_withCounter - writes the character c to stdout
 * @num: The character to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _putnum_withCounter(int num, int* i)
{
	if (num / 10)
		_putnum_withCounter(num / 10, i);
	_putchar(num % 10 + '0');
	*i += 1;
}

/**
 * _putnum - writes the character c to stdout
 * @num: The character to print
 *
 * Return: On success length of number.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putnum(int num)
{
	int i;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	i = 0;
	_putnum_withCounter(num, &i);
	return (i);
}