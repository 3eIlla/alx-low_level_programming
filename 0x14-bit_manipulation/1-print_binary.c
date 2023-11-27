#include "main.h"

/**
 * print_binary - print no. as binary string
 *
 * @n: no. 2 print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int printed = 0, bit = sizeof(n) * 8;


	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed = printed + 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}

	if (!printed)
		_putchar('0');
}

