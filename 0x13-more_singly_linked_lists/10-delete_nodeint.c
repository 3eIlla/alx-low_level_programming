#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nd1 at given index
 * @head: address of pointer to first nd1
 * @index: index of nd1 to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int lil = 0;
	listint_t *nd1, *nd0;
	

	if (!head || !*head)
		{
			return (-1);
		}

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
