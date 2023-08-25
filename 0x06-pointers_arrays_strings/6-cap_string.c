#include "main.h"

/**
 * cap_string- return the pointer of the string
 * islo - check lower
 * isdi - check dilimeter
 *
 * @c :  input
 *
 * Return : noth
 */

int islo(char c)
{
	return (c <= 122 && c >= 97);
}

int isdi(char c)
{
	int l;

	char deli[] = "\t\n,;.!?\"(){}";

	for (l = 0; l < 12; l++)
	{
		if (c == deli[l])
		{
			return (1);
		}
	}
	return (0);
}

char *cap_string(char *s)
{
	char *ptr = s;

	int fode = 1;

	while (*s)
	{
		if (isdi(*s))
		{
			fode = 1;
		}
		else if (islo(*s) && fode)
		{
			*s -= 32;
			fode = 0;
		}
		else
		{
			fode = 0;
		}
		s = s + 1;
	}
	return (ptr);
}
