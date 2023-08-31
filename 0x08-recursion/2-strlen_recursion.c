#include "main.h"

/**
 * _strlen_recursion - N.proto
 *
 * @s: input
 *
 * Return: nothin
 */

int _strlen_recursion(char *s)
{
	int ss = 0;

	if (*s > '\0')
	{
		ss += _strlen_recursion(s + 1) + 1;
	}
	return (ss);
}
