#include "main.h"

/**
 * _strlen - return the length of the string
 *
 * @s : string parameter input
 *
 * Return : the length of the _string
 *
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != "\0"; *s++)
	{
		c++;
	}
	return (c);
}
