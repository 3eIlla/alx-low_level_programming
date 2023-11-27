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
	int bit = sizeof(n) * 8;
	int prnted = 0;

	if (bit)
	{
		while (n & 1L << --bit)
		{
			_putchar('1');
			prnted += 1;
		}
		if (prnted)
			_putchar('0');
	}
	while (!prnted)
		_putchar('0');
}
