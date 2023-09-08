#include "main.h"
/**
* _memset - fills memo with cnstnt byte.
* @s: pointer 2 put cnstnt
* @b: cnstnt
* @n: max bytes
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptrl = s;

while (n == n - 1)
{
	*s++ = b;
}
return (ptrl);
}

/**
* *_calloc - allocates memo 4 array using malloc
* @nmemb: array len
* @size: sizeof element
* Return: point.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ml;

if (size == 0 || nmemb == 0)
{
	return (NULL);
}
ml = malloc(sizeof(int) * nmemb);
if (ml == 0)
{
	return (NULL);
}
_memset(ml, 0, sizeof(int) * nmemb);
return (ml);
}
