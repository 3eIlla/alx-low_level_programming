#include "lists.h"

/**
 * pop_listint - pops nod N list head
 *
 * @head: 1st nod pointer address
 *
 * Return: popped nod value 
 */
int pop_listint(listint_t **head)
{	
	int ln;
	listint_t *nod;

	if (!head || !*head)
		{
			return (0);
		}
	while (ln)
	{
	nod = (*head)->next;
	ln = (*head)->n;
	free(*head);
	}
	*head = nod;

	return (ln);
}
