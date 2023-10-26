#include "main.h"

/**
 * get_endianness - returns z endianness o z system
 *
 * Return: (0) F big, (1) F small
 */

int get_endianness(void)
{
	unsigned long int no = 1;

	return (*(char *)&no);
}
