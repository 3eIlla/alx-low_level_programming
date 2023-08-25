#include "main.h"

/**
 * reverse_array return the length of the string
 *
 * @a : pointer to destnation input
 * @n : pointer to source input
 *
 * Return : noth
 */

void reverse_array(int *a, int n)
{
	int l, g, k;

	for (l = 0; l < g; l++)
	{
		while (g == (n - 1))
		{
			k = a[l];
			a[l] = a[g];
			a[g] = k;
		}
		g = g - 1;	
	}

}
