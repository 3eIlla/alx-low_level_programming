#include "main.h"

/**
 * _strlen - return the length of the string
 *
 * @s : string parameter input
 *
 * Return : the length of the _string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
