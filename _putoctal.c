#include <stdlib.h>
#include "main.h"

/**
 * _putoctal_withCounter - convert number to octal.
 * @num: The number to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putoctal_withCounter(unsigned long int num, int *i)
{
	if (num / 8)
		_putoctal_withCounter(num / 8, i);
	_putchar(num % 8 + '0');
	*i += 1;
}

/**
 * _putoctal - convert number to octal
 * @num: The character to print
 *
 * Return: On success length of num.
 */
int _putoctal(unsigned long int num)
{
	int i;

	i = 0;
	_putoctal_withCounter(num, &i);
	return (i);
}
