#include "main.h"

/**
 * _strncat- return the length of the string
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 * @n: no. of bytes
 *
 * Return : destnation
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	while (dest[a])
	{
		a = a + 1;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest{a + b} = src[b];
	}
	dest{a + b} = '\0';
	return (dest);
}
