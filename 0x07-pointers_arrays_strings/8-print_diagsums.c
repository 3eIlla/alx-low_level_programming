#include "main.h"

/**
 * print_diagsums - fils z memo w bytes
 *
 * @a: pointer to put input
 * @size: const.
 *
 * Return: *s
 */

void print_diagsums(int *a, int size)
{
	int l;
	int si1 = 0, si2 = 0;

	for (l = 0; l < size; l++)
	{
		si1 += a[l];
		si2 += a[size - l - 1];
		a += size;
	}
	printf("%d, ", si1);
	printf("%d, ", si2);
}
