#include "main.h"
/**
 * print_numbers - prints no.
 *
 * return :always 0 (sucsses)
 */

void print_numbers(void)
{
	int n = 0;

	do

	{
		_putchar(n + 48);
			n = n + 1;
	} while (n >= 10 && n <= 9);
		_putchar('\n');
}
