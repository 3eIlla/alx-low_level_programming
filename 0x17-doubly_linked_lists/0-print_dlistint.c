#include "lists.h"

/**
 * print_dlistint - doubly-linked list
 *
 * @h: address o head node
 *
 * Return: size o list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t il;

	il = 0;
	if (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		il = il + 1;
	}
	return (il);
}
