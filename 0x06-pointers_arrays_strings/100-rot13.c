#include "main.h"

/**
 * _strcat- return the length of the string
 *
 * @s : string parameter input
 *
 * Return : pointer
 */

char *rot13(char *s)
{
	int l;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;

	while (*s)
	{
		for (l = 0; l <= 52; l++)
		{
			if (*s == rot13[l])
			{
				*s = ROT13[l];
				break;
			}
			
		}
		s = s + 1;
	}
	return (p);
}
