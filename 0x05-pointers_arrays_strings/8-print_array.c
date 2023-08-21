#include "main.h"

/**
 * print_array- return the length of the string
 *
 * @a :  parameter input
 * @n :parameter input
 *
 * Return : noth
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != (n - 1))
		{
			printf("%d, ", a[l]);
		}
		else
		{
			printf("%d", a[l]);
		}
	}
	printf("\n");
}
