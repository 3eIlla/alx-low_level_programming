#include "main.h"

/**
 * * *infinite_add - return the size of the string
 *
 * @size : parameter input
 * @b : string parameter input
 *
 * Return : noth
 */

void print_buffer(char *b, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = ((size - s) > 10) ? (size - s) : 10;
			printf("%08x: ", s);
			printHexes(b, s, e);
			printASCII(b, s, e);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
