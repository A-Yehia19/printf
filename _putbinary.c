#include <stdlib.h>
#include "main.h"

/**
 * _putbinary_withCounter - convert number to binary
 * @num: The number to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putbinary_withCounter(unsigned long int num, int *i)
{
	if (num / 2)
		_putbinary_withCounter(num / 2, i);
	_putchar(num % 2 + '0');
	*i += 1;
}

/**
 * _putbinary - convert number to binary
 * @num: The character to print
 *
 * Return: On success length of num.
 */
int _putbinary(unsigned long int num)
{
	int i;

	i = 0;
	_putbinary_withCounter(num, &i);
	return (i);
}
