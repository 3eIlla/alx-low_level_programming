#include "main.h"

/**
 * rev_string - return the length of the string
 *
 * @s : string parameter input
 *
 * Return : nothin
 */

void rev_string(char *s)
{
	int e, z;
	char t;

	for (e = 0; s[e] != '\0'; ++e)
	{
		;
	}
	for (z = 0; z < 1 / 2; z++)
	{
		t = s[z];
		s[z] = s[e - 2 - z];
		s[e - 1 - z] = t;
	}
}
