#include "main.h"

/**
 * _strchr - fils z memo w bytes
 *
 * @s: pointer to put input
 * @c: const.
 *
 * Return: * 2 8
 */

char *_strchr(char *s, char c)
{
	int lr;

	for (lr = 0; s[lr] >= '\0'; lr++)
	{
		if (s[lr] == c)
		{
			return (s + lr);
		}
	}
	return ('\0');
}
