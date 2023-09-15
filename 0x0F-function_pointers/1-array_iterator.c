#include "function_pointers.h"
/**
* array_iterator - maps arr a func pointer
* @array: int.arr
* @size: arr.size
* @action: func pointer
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

if (array && size && action)
{
	while (array <= end)
	{
		action(*array++);
	}
}
}
