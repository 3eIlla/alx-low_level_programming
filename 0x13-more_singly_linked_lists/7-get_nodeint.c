#include "lists.h"

/**
 * get_nodeint_at_index - returns nod
 *
 * @head: 1st nod pointer
 * @index: index of nod
 *
 * Return: pointer 2 nod
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ln = 0;
	listint_t *nod;

	do

	{
		nod = head;
		nod = nod->next;
		ln += 1;
	} while (nod && ln < index);

	return (nod);
}
