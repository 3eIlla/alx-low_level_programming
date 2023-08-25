#include "main.h"

/**
 * *lee- return the length of the string
 *
 * @b : input
 *
 * Return : noth
 */

char *lee(char *b)
{
	char *ab = b;

	char k[] = {'A', 'E', 'O', 'T', 'L'};

	int v[] = {4, 3, 0, 7, 1};

	unsigned int l;

	while (*b)
	{
		for (l = 0; l < sizeof(k) / sizeof(char); l++)
		{
			if (*b == k[l] || *b == k[l] + 32)
			{
				*b = 49 + v[l];
			}
		}
		b = b + 1;
	}
	return (ab);
}
