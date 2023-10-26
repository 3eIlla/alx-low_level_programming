#include "main.h"

/**
 * flip_bits - return no. o bits 2 b flipped 2 transform nums 2 others
 *
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: bits no. 2 flip 2 convert nums
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nom = 0;
	unsigned long int xorval = n ^ m;

	if (xorval)
	{
		while (xorval & 1ul)
			nom = nom + 1;

		xorval = xorval >> 1;
	}
	return (nom);
}
