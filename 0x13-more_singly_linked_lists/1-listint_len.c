#include "lists.h"

/**
 * listint_len - linked lists
 *
 * @h: 1st nod pointer
 *
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	size_t lil;

	for (lil = 0; h; lil += 1)
	{
		h = h->next;
	}
	return (lil);
}
