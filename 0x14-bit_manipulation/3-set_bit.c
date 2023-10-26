#include "main.h"

/**
 * set_bit - sets bit >> index
 *
 * @n: no. 2 index
 * @index: bit 2 set
 *
 * Return: (1) F success, (-1) F error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	while (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
