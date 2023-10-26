#include "main.h"

/**
 * clear_bit - clear bit >> index
 *
 * @n: no. 2 index
 * @index: bit 2 set
 *
 * Return: (1) F success, (-1) F error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	while (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
