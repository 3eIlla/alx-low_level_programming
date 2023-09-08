#include "main.h"
/**
* array_range - create array o integ
* @min: starting int
* @max: max int
* Return: array o integ
*/
int *array_range(int min, int max)
{
	int ln, il;
	int *ptrl;

if (min > max)
{
	return (NULL);
}
ln = max - min + 1;
ptrl = malloc(sizeof(int) * ln);
if (ptrl == 0)
{
	return (NULL);
}
for (il = 0; il < ln; il++)
{
	ptrl[il] = min = min + 1;
}
return (ptrl);
}
