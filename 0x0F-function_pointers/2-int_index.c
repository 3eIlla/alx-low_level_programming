#include "function_pointers.h"
/**
* int_index - searches for integer
* @array: int.arr
* @size: arr.siz
* @cmp: comp.func
* Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int il;

if (array && size && cmp)
{
	for (il = 0; il < size; il++)
	{
		if (cmp(array[il]))
		{
			return (il);
		}
	}
}
return (-1);
}
