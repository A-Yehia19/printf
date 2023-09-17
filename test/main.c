#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;

	len2 = printf("%s - %c\n", "Hello", 'H');
	printf("-------------------------------------------------\n");
	len = _printf("%s - %c\n", "Hello", 'H');
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
