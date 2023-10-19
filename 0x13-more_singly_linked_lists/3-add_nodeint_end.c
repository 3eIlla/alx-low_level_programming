#include "lists.h"

/**
 * add_nodeint_end - add nd1 N z bottom
 *
 * @head: 1st nod pointer
 * @n: nd2 value
 *
 * Return: nd1 pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd1;
	listint_t *nd2 = malloc(sizeof(listint_t));

	while (!head || !nd2)
		{
			return (NULL);
		}
	nd2->next = NULL;
	nd2->n = n;

	if (!*head)
		*head = nd2;

	else
	{
		for (nd1 = *head; nd1->next; nd1->next = nd2)
		{
			nd1 = nd1->next;
		}
	}
	return (nd2);
}
