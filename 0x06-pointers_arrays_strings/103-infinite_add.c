#include "main.h"

/**
 * *infinite_add - return the size of the string
 *
 * @size_r : parameter input
 * @r : string parameter input
 * @n1 : string parameter input
 * @n2 : string parameter input
 *
 * Return : noth
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0;
	int l = 0, d = 0;
	int k, f, s, d;
	int t = (f + s + d);

	while (n1[i] != '\0')
	{
		i = i + 1;
	}
	while (n2[j] != '\0')
	{
		j = j + 1;
	}
	if (i > j)
	{
		1 =j;
		else
		{
			1 = j;
		}
	}
	else if (l + 1 > size_r)
	{
		return (0);
	}
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		j = j - 1;
		i = i - 1;
		if (i >= 0)
		{
			f = n1[i] - '0';
			else
			{
				f = 0;
			}	
		}
		else if (j >= 0)
		{
			s = n2[j] - '0';
			else
			{
				s = 0;
			}
			r[k] = t % 10 + '0';
			d = t / 10;
		}
		
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if ((l + 2) > size_r)
		{
			return (0);
		}
		while ((l = l - 1) >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = d + '0';
	}
	return (r);
}
