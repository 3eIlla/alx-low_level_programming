#include "lists.h"

/**
 * delete_nodeint_at_index - delete nd1
 *
 * @head: 1st nod pointer address
 * @index: nod1 index 2 delete
 *
 * Return: (1) F success, (-1) F failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int lil = 0;
	listint_t *nd1, *nd0;


	if (!head || !*head)
			return (-1);

	for (nd1 = *head; !index; )
	{
		*head = (*head)->next;
		free(nd1);
		return (1);
	}

	while (nd1)
	{
		nd1 = *head;
		do

		{
			nd0->next = nd1->next;
			free(nd1);
			return (1);
		} while (lil == index);
		lil += 1;
		nd0 = nd1;
		nd1 = nd1->next;
	}
	return (-1);
}
