#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *
 * @h: 2 the head of the dlistint_t list.
 * @idx: 2 insert the new node.
 * @n: 4 the new node to contain.
 *
 * Return: f the function fails - (NULL)
 *         Otherwise - (address o z n.node)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	while (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
