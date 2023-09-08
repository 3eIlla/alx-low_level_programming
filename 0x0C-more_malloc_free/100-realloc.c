#include "main.h"
/**
*  _realloc - allocates memo block usin malloc & free.
*   @ptr: pointer 2 memo allocated w malloc(old _size).
*   @old_size: size n bytes o allocated space
*   @new_size: size n bytes o n.memo block.
*   Return: NULL if new_size = 0 and ptr is not NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pl;
	unsigned int il;

if (new_size == old_size)
{
	return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
	pl = malloc(new_size);
	if (pl == NULL)
	{
		return (NULL);
	}
return (pl);
}
if (new_size > old_size)
{
	pl = malloc(new_size);
	if (pl == NULL)
	{
		return (NULL);
	}
	for (il = 0; il < old_size && il < new_size; il++)
	{
		*((char *)pl + il) = *((char *)ptr + il);
	}
	free(ptr);
}
return (pl);
}
