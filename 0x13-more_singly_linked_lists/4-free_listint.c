#include "lists.h"

/**
 * free_listint - get list o ints free
 *
 * @head: 1st nod pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	for (node = head; head; )
	{
		head = head->next;
		free(node);
	}
}
