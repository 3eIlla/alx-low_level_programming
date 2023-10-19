#include "lists.h"

/**
 * list_len - length o linked list
 *
 * @h: 1st pointer node
 *
 * Return: size o list
 */
size_t list_len(const list_t *h)
{
	size_t lil;

	for (lil = 0; h; lil++)
	{
		h = h->next;
	}
	return (lil);
}
