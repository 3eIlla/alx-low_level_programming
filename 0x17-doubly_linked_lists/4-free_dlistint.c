#include "lists.h"


/**
 * free_dlistint - dlist
 *
 * @head: pointer 2 current head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;

		head = head->next;

		free(node);
	}
}
