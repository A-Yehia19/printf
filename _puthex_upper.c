#include <stdlib.h>
#include "main.h"

/**
 * _putHEX_withCounter - convert number to hex upper case
 * @num: The number to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putHEX_withCounter(unsigned int num, int *i)
{
	int rem;

	if (num / 16)
		_putHEX_withCounter(num / 16, i);
	
	rem = num % 16;
	_putchar(rem < 10 ? rem + '0' : rem - 10 + 'A');
	*i += 1;
}

/**
 * _putHEX - convert number to hex upper case
 * @num: The character to print
 *
 * Return: On success length of num.
 */
int _putHEX(unsigned int num)
{
	int i;

	i = 0;
	_putHEX_withCounter(num, &i);
	return (i);
}
