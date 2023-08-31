#include "main.h"

/**
 * _sqrt_recursion - N.proto
 *
 * @n: input
 *
 * Return: nothin
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - support proto
 *
 * @n: input
 * @v: ii input
 *
 * Return: nothin
 */

int square(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (square (n, v + 1));
	}
	else
	{
		return (-1);
	}
}
