#include "main.h"

/**
 * _strstr - fils z memo w bytes
 *
 * @haystack: pointer to put input
 * @needle: const.
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack != '\0')
	{
		haystack++;
		while (*h == *n && *n != '\0')
		{
			h = h + 1;
			n = n + 1;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
