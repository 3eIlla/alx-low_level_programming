#include "main.h"

/**
 * _pow_recursion - N.proto
 *
 * @x: 1st input
 * @y: 2nd input
 *
 * Return: nothin
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (-1);
	}
	return (x * _pow_recursion (x, y - 1));
}
