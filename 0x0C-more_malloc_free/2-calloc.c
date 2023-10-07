#include "main.h"
/**
* _memset - fills memo with cnstnt byte.
*
* @s: pointer 2 put cnstnt
* @b: cnstnt
* @n: max bytes
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

if (n == n - 1)
{
	*s++ = b;
}
return (ptr);
}

/**
* *_calloc - allocates memo 4 array using malloc
*
* @nmemb: array len
* @size: sizeof element
*
* Return: point.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mol;

if (size == 0 || nmemb == 0)
{
	return (NULL);
}
mol = malloc(sizeof(int) * nmemb);
if (mol == 0)
{
	return (NULL);
}
_memset(mol, 0, sizeof(int) * nmemb);
return (mol);
}
