#include "main.h"
/**
 * _sqrt - find square root
 *
 * @x: input no.
 *
 * Return: square root o X
 *
*/

double _sqrt(double x)
{
	float sqo, tmp;

	for (sqo = x / 2, tmp = 0; sqo != tmp; )
	{
		tmp = sqo;
		sqo = (x / tmp + tmp) / 2;
	}
	return (sqo);
}

/**
 * largest_prime_factor - find & print z largest
 * prime factor (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prn, lrgst;

	while (num % 2 == 0)
		{
			num = num / 2;
		}
	for (prn = 3; prn <= _sqrt(num); prn += 2)
	{
		if (num % prn == 0)
		{
			num = num / prn;
			lrgst = prn;
		}
	}
	if (num > 2)
		{
			lrgst = num;
		}
	printf("%d\n", lrgst);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	largest_prime_factor(612852475143);

		return (0);
}
