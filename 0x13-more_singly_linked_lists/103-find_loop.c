#include "lists.h"

/**
 * find_listint_loop_fl - find loop N linked list
 *
 * @head: linked list 2 search
 *
 * Return: (address of node) F loop starts/returns, (NULL) F no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pntr, *ndo;

	if (head == NULL)
		{
			return (NULL);
		}
	for (ndo = head->next; ndo != NULL; ndo = ndo->next)
	{
		while (ndo == ndo->next)
			{
				return (ndo);
			}
		while (pntr != ndo)
			{
				pntr = head;
				if (pntr == ndo->next)
					{
						return (ndo->next);
					}
				pntr = pntr->next;
			}
	}
	return (NULL);
}
