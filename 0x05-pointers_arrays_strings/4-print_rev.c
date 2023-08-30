#include "main.h"

/**
 * print_rev - return the length of the string
 *
 * @s: string parameter input
 *
 * Return: the reversed length
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
		while (l--)
		{
			_putchar(s[l]);
		}
	}
	_putchar('\n');
}
