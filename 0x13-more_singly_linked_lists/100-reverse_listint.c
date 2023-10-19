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
	listint_t *nod = NULL;
	listint_t *nxt = NULL;

	if (!head || !*head)
			return (NULL);

	nod = *head;
	*head = NULL;

	do

	{
		nxt = nod->next;
		nod->nxt = *head;
		*head = nod;
		nod = nxt;
	} while (nod);

	return (*head);
}
