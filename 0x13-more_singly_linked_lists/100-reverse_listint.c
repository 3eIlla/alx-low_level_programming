#include "lists.h"

/**
 * reverse_listint - reverses z int list
 *
 * @head: 1st nod pointer address
 *
 * Return: head address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		{
			return (NULL);
		}
	node = *head;
	*head = NULL;

	do
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	} while (node);

	return (*head);
}
