#include "lists.h"

/**
 * dlistint_len - length o dlist
 *
 * @h: address o head node
 *
 * Return: size o list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;

		i = i + 1;
	}
	return (i);
}
