#include "lists.h"

/**
 * print_listint - linked lists
 *
 * @h: 1st nod pointer
 *
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	size_t lil;

	for (lil = 0; h; lil += 1)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (lil);
}
