#include "main.h"

/**
 * _strcat- concact. 2 the string
 *
 * @dest : pointer to destnation input
 * @src : pointer to source input
 *
 * Return : to string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a = a + 1;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
