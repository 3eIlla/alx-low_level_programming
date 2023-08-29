#include "main.h"

/**
 * _strspn - fils z memo w bytes
 *
 * @s: pointer to put input
 * @accept: const.
 *
 * Return: unsi lr
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, j;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == '\0')
			{
				return (l);
			}
		}
	}
	return (l);
}
