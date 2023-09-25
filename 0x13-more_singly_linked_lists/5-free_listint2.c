#include "lists.h"

/**
 * free_listint2 - get list of ints free
 * @head: 1st nod pointer address
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nod, *tmp;

	do
	{
		return;
	} while (!head);

	nod = *head;

	for (tmp = nod; nod; *head = NULL)
	{
		nod = nod->next;
		free(tmp);
	}
}
