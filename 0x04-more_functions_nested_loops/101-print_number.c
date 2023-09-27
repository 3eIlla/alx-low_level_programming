#include "main.h"
/**
 * print_number - Print int
 *
 * @n: The int
 *
 * Return: always 0 (sucsses)
*/

void print_number(int n)
{
	unsigned int numb = n;

	while (n < 0)
	{
		_putchar('-');
		numb = -numb;
	}

	if ((numb / 10) > 0)
		{
			print_number(numb / 10);
	}
	_putchar((numb % 10) + 48);
}
