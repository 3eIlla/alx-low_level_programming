#include "dog.h"

/**
* free_dog - frees ur dgs
* @d: yo dg
* Return: voi
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
		free(d->name);
		}
		if (d->owner)
		{
		free(d->owner);
		free(d);
		}
	}
}
