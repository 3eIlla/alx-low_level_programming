#include "lists.h"

/**
 * sum_dlistint - sums the values of a dlist
 *
 * @head: pointer 2 current head node
 *
 * Return: int sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
