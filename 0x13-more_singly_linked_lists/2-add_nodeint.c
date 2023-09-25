#include "lists.h"

/**
 * add_nodeint - add nod N z top
 *
 * @head: 1st nod pointer
 * @n: N.nod value
 *
 * Return: N.nod pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnod = malloc(sizeof(listint_t));

	if (!head || !nnod)
		{
			return (NULL);
		}
	nnod->next = NULL;
	nnod->n = n;
	while (*head)
		{
			nnod->next = *head;
		}
	*head = nnod;
	return (nnod);
}
