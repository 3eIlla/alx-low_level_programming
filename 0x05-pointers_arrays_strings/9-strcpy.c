#include "main.h"

/**
 * *_strcpy - cp the string
 *
 * @src :  parameter input
 * @dest : parameter input
 *
 * Return : to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = -1;

	do

	{
		++l;
		dest[l] = src[l];
	} while (src[l] != '\0');
	return (dest);
}
