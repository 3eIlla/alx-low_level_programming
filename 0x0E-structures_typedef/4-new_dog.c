#include "dog.h"

/**
* _strlen - funct gets a len o strin
* @str: strin 2 get len
* Return: leng o str
*/
int _strlen(const char *str)
{
	int len;

	for (len = 0; *str++; len++)
	;

	return (len);
}

/**
* *_strcopy - returns @dest w cp o strin from @src
* @src: strin 2 cp
* @dest: cp strin /here
* Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int il;

	for (il = 0; src[il]; il++)
	{
		dest[il] = src[il];
		dest[il] = '\0';
	}
return (dest);
}

/**
* *new_dog - a function that creates a new dog
* @name: name o dg
* @age: age o dg
* @owner: dg own
* Return: struct dg (pointer) or (NULL) F fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

if (!name || age < 0 || !owner)
{
	return (NULL);
}
dg = (dog_t *) malloc(sizeof(dog_t));
if (dg == NULL)
{
	return (NULL);
}
dg->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dg).name == NULL)
	{
	free(dg);
	return (NULL);
	}
dg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dg).owner == NULL)
	{
	free(dg->name);
	free(dg);
	return (NULL);
	}
dg->name = _strcopy(dg->name, name);
dg->age = age;
dg->owner = _strcopy(dg->owner, owner);
return (dg);
}
