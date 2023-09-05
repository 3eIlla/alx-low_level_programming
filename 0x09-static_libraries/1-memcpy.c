#include "main.h"

/**
 * _memcpy - fils z memo w bytes
 *
 * @dest: pointer to put input
 * @src: const.
 * @n: z bytes
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lr;

	for (lr = 0; lr < n; lr++)
	{
		dest[lr] = src[lr];
	}
	return (dest);
}
