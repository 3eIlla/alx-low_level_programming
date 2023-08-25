#include "main.h"

/**
 *  _strcmp- return the length of the string
 *
 * @s1 : pointer to destnation input
 * @s2 : pointer to source input
 * @e: no. of bytes
 *
 * Return : noth
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1 = s1 + 1;
		s2 = s2;
	}
	return (e);
}
