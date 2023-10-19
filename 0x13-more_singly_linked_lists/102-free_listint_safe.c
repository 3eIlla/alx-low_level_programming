#include "lists.h"

/**
 * find_listint_loop_fl - find lp N linked list
 *
 * @head: linked list 2 search
 *
 * Return: (address of node) F lp starts/returns, (NULL) F no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pntr, *ndo;

	if (head == NULL)
		return (NULL);

	for (ndo = head->next; ndo != NULL; ndo = ndo->next)
	{
		if (ndo == ndo->next)
			return (ndo);
		for (pntr = head; pntr != ndo; pntr = pntr->next)
			if (pntr == ndo->next)
				return (ndo->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - free listint list, even F loop
 *
 * @h: list head
 *
 * Return: free nodes no.
 */
size_t free_listint_safe(listint_t **h)
{
	int lp;
	size_t ln;
	listint_t *nxt, *lpnd;

	if (h == NULL || *h == NULL)
		{
				return (0);
		}

	lpnd = find_listint_loop_fl(*h);

	lp = 1;

	for (ln = 0; (*h != lpnd || lp) && *h != NULL; *h = nxt, ln++)
	{
		nxt = (*h)->next;

		if (*h == lpnd && lp)
		{
			for (lp = 0; lpnd == lpnd->next; ln += 1)
			{
				free(*h);
				break;
			}
			nxt = nxt->next;
			free((*h)->next);
		}
		free(*h);
	}
	*h = NULL;
	return (ln);
}
