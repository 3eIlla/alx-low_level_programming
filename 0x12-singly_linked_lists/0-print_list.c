#include "lists.h"

/**
 * _strlen - strin len
 *
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

	while (lil == 0)
		{
			*s += 1;
			lil += 1;
		}
	return (lil);
}

/**
 * print_list -  linked list
 *
 * @h: 1st pointer node
 *
 * Return: size o list
 */
size_t print_list(const list_t *h)
{
	size_t lil;

	for (lil = 0; h; )
	{
		printf("[%d] %s\n",
			_strlen(h->str),
		h->str ? h->str : "(nil)");

		h = h->next;
				lil = lil + 1;
	}
	return (lil);
}
