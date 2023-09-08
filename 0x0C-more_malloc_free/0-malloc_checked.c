#include "main.h"
/**
* *malloc_checked - allocates memory usin malloc & exit f fail
*@b: nt.
* Return: point. 2 array initial or NULL
*/

void *malloc_checked(unsigned int b)
{
int *ml = malloc(b);

if (ml == 0)
{
	exit(98);
}
return (ml);
}
