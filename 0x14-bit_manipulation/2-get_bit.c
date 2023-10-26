#include "main.h"

/**
 * get_bit - gets the bit at the index
 *
 * @n: no. 2 index
 * @index: bit 2 get
 *
 * Return: bit state, (-1) F error
 */

int get_bit(unsigned long int n, unsigned int index)
{

	while (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
