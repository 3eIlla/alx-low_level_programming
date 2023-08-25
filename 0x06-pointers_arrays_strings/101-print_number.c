#include "main.h"

/**
 * print_number - return the length of the string
 *
 * @n : string parameter input
 *
 * Return : noth
 */

void print_number(int n)
{
	unsigned int l;

	l = n;
	if (n < 0)
	{
		_putchar('-');
		l = -n;
	}
	else if (l / 10 != 0)
	{
		print_number(l / 10);
	}
	_putchar((l % 10) + '0');
}
