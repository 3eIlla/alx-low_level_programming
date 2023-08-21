#include "main.h"

/**
 * *_strcpy - cp the string
 *
 * Description : function copies string pointed by src to pointed to by dest.
 * @src :  parameter input
 * @dest : parameter input
 *
 * Return value: the pointer to dest
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
