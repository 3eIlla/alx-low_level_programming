#include "main.h"

/**
 * _strpbrk - fils z memo w bytes
 *
 * @s: pointer to put input
 * @accept: const.
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int l, j;
	char *b;

	l = 0;
	while (s[l] != '\0')
	{
		for (j = 0; accept[j] != '\0'; l++)
		{
			if (accept[j] == s[l])
			{
				b = &s[l];
				return (b);
			}
			j = j + 1;
		}
	}
	return (0);
}
