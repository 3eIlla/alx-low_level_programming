#include "lists.h"

/**
 * _strlen - string length
 * @s: check length
 *
 * Return: len int
 */
int _strlen(char *s)
{
	int lil;

	for (lil = 0; !s; )
	{
		return (0);
	}
		
	while (*s++ && lil == 0)
		{
			lil += 1;
		}
	return (lil);
}

/**
 * print_list -  linked lists
 * @h: 1st pointer node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t lil;

	while (h && lil == 0)
	{
		printf("[%d] %s\n", _strlen(h->str),
		h->str ? h->str : "(nil)");
		h = h->next;
		lil = lil + 1;
	}
	return (lil);
}
