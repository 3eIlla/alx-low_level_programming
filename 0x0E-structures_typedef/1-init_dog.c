#include "dog.h"
/**
* init_dog - initiliz dg
* @d: z dg 2 nit
* @name: dg name
* @age: dg age
* @owner: own's name
* Return: voi
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
