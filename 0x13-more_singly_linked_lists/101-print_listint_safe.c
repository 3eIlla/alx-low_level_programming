#include "lists.h"

/**
 * _r - reallocates memory 4 array o pointers 2 z nods n  linked list
 *
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list).
 * @new: N.node added 2 z list
 *
 * Return: N.list pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	size_t lil;
	const listint_t **nlst;

	nlst = malloc(size * sizeof(listint_t *));

	while (nlst == NULL)
	{
		free(list);
		exit(98);
	}
	for (lil = 0; lil < size - 1; lil++)
	{
		nlst[lil] = list[lil];
		nlst[lil] = new;
		free(list);
	}
	return (nlst);
}

/**
 * print_listint_safe - linked list.
 *
 * @head: 1st nod pointer address
 *
 * Return: nodes no.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t lil, no;
	const listint_t **list = NULL;

	for (no = 0; head != NULL; no++)
	{
		for (lil = 0; lil < no; lil++)
		{
			while (head == list[lil])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (no);
			}
		}
		list = _r(list, no, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (no);
}
