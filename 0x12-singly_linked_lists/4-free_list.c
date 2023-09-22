#include "lists.h"

/**
 * free_list - get all nodes free
 * @head: pointer 2 head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n1, *n2;

	if (!head)
		{
			return;
		}

	for (n1 = head; n1; n1 = n2)
	{
		n2 = n2->next;
		free(n1->str);
		free(n1);
	}
}
