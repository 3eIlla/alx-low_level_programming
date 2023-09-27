#include "main.h"
/**
 * print_diagonal - check upper case
 *
 * @n : no. input of z char.
 *
 * return :always 0 (sucsses)
 */

void print_diagonal(int n)
{
int nn, s;

if (n <= 0)
{
	_putchar('\n');
if (n > 0)
{
	for (nn = 1; nn <= n; nn++)
	{
	for (s = 1; s <= nn; s++)
	{
		_putchar(' ');
	}
	_putchar('/');
	_putchar('\n');
	}
}
}
}
