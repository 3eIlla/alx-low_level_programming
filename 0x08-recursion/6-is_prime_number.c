#include "main.h"

/**
 * is_prime_number - N.proto
 *
 * @n: input
 *
 * Return: nothin
 */

int is_prime_number(int n)
{
	return (check_p(n, 2));
}

/**
 * check_p - support proto
 *
 * @n: input
 * @o: input
 *
 * Return: nothin
 */

int check_p(int n, int o)
{
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_p(n, o + 1));
	}
}
