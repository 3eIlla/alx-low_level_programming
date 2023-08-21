#include "main.h"

/**
 * print_rev - return the length of the string
 *
 * @s : string parameter input
 *
 * Return : the reversed length
 */

void print_rev(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		if (l--)
		{
			_putchar(s[l]);
		}
	}
	_putchar('\n');
}
