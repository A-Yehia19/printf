#include <stdlib.h>
#include "main.h"

/**
 * _putaddress - writes address of pointer
 * @str: The string to print
 *
 * Return: On success length of string.
 */
int _putaddress(void *address)
{
	if (address == NULL)
		return (_putstr("(nil)"));
	
	return (_putstr("0x") + _puthex((unsigned int)address));
}
