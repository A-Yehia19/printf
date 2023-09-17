#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;

	len2 = printf("%%%d\n", 1111111111);
	printf("-------------------------------------------------\n");
	len = _printf("%%%d\n",1111111111);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
