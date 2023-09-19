#include <stdlib.h>
#include "main.h"

/**
 * _puthex_withCounter - convert number to hex lower case.
 * @num: The number to print.
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _puthex_withCounter(unsigned long int num, int *i)
{
	int rem;

	if (num / 16)
		_puthex_withCounter(num / 16, i);

	rem = num % 16;
	_putchar(rem < 10 ? rem + '0' : rem - 10 + 'a');
	*i += 1;
}

/**
 * _puthex - convert number to hex lower case
 * @num: The character to print
 *
 * Return: On success length of num.
 */
int _puthex(unsigned long int num)
{
	int i;

	i = 0;
	_puthex_withCounter(num, &i);
	return (i);
}
