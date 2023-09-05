#include "main.h"

/**
 * _memset - fils z memo w bytes
 *
 * @s: pointer to put input
 * @b: const.
 * @n: z bytes
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lr;

	for (lr = 0; n > 0; lr++)
	{
		s[lr] = b;
	}
	n = n - 1;
	return (s);
}
