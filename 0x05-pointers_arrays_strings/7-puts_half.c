#include "main.h"

/**
 * puts_half - return the length of the string
 *
 * @stro : string parameter input
 *
 * Return : noth
 */

void puts_half(char *stro)
{
	int l;
	
	for (l = 0; stro[l] != '\0'; l++)
	{
		;
	}
	l++;
	for (l /= 2; stro[l] != '\0'; l++)
	{
		_putchar(stro[l]);
	}
	_putchar('\n');
}
