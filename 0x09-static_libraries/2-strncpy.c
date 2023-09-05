#include "main.h"

/**
 * _strncpy- return the length of the string
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 * @n: no. of bytes
 *
 * Return : destnatio
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l]; l++)
	{
		dest[l] = src[l];
	}
	while (l < n)
	{
		dest[l] = '\0';
		l = l + 1;
	}
	return (dest);
}
