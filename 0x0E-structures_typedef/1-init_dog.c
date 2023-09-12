#include "dog.h"
/**
* init_dog - initiliz  dog
* @d: z dog 2 nit
* @name: dog's name
* @age: dog's age
* @owner: owner's name
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
