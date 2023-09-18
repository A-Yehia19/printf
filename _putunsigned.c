#include <stdlib.h>
#include "main.h"

/**
 * _putunsigned_withCounter - writes unsigned number to stdout
 * @num: The number to print
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putunsigned_withCounter(unsigned long int num, int *i)
{
	if (num / 10)
		_putunsigned_withCounter(num / 10, i);
	_putchar(num % 10 + '0');
	*i += 1;
}

/**
 * _putunsigned - writes unsigned number to stdout
 * @num: The number to print
 *
 * Return: On success length of number.
 */
int _putunsigned(unsigned long int num)
{
	int i;

	i = 0;

	_putunsigned_withCounter(num, &i);
	return (i);
}
