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

    len = _printf("Character:[%", 'H');
    printf("\n");
    len2 = printf("Character:[%", 'H');
    printf("\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
