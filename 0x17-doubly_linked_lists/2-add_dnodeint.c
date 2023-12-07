#include "lists.h"

/**
 * add_dnodeint - adds new head node 2 dlist
 *
 * @head: address o pointer 2 current head node
 * @n: int field o n.node
 *
 * Return: address of n.node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		{
			return (new ? free(new), NULL : NULL);
		}

	new->n = n;
	new->prev = NULL;

	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}

	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
