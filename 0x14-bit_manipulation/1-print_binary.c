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
	int prtd = 0;
	int bit = sizeof(n) * 8;

	for (; bit; )
	{
		if (n & 1L << bit--)
		{
			_putchar('1');
			prtd = prtd + 1;
		}
		else if (prtd)
			_putchar('0');
	}

	while (!prtd)
		_putchar('0');
}
