#include "main.h"

/**
 * char *_strcpy- cp the string
 *
 * Description : function cp string pointed by 'src' to pointed to by 'dest' .
 * @src :  parameter input
 * @dest : parameter input
 *
 * Return : to 'dest'
 */

char *_strcpy(char *src, char *dest)
{
	int l = -1;

	do

	{
		++l;
		dest[l] = src[l];
	} while (src[l] != '\0');

	return (dest);
}
