#include "lists.h"

/**
 * insert_nodeint_at_index - insert N.nod at index
 *
 * @head: 1st nod pointer address
 * @idx: index 2 insert N.nod
 * @n: N.nod value
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int lil = 0;
	listint_t *nd1, *nd2 = malloc(sizeof(listint_t));

	if (!head || !nd2)
		{
			return (NULL);
		}
	nd2->n = n;
	nd2->next = NULL;

	while (!idx)
	{
		nd2->next = *head;
		*head = nd2;
		return (nd2);
	}
	nd1 = *head;

	while (nd1)
	{
		do
		{
			nd2->next = nd1->next;
			nd1->next = nd2;
			return (nd2);
		} while (lil == idx - 1);

		lil = lil + 1;
		nd1 = nd1->next;
	}

	free(nd2);
	return (NULL);
}
