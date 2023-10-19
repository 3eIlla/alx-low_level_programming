#include "lists.h"

/**
 * sum_listint - all data sum
 *
 * @head: 1st nod pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; )
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
