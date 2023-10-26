#include "main.h"

/**
 * binary_to_uint - converts binary no. string 2 unsigned int
 *
 * @b: binary no. as a string
 *
 * Return: unsigned int form b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int no = 0;

	if (!b)
		return (0);

	for (; *b; )
	{
		while (*b != '1' && *b != '0')
			return (0);

		no = no * 2 + (*b++ - '0');
	}

	return (no);
}

