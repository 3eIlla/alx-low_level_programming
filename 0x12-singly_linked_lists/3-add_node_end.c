#include "lists.h"

/**
 * add_node_end - add n1 2 z list
 * @head: address o pointer 2 n1
 * @str: str field o n1
 *
 * Return: size o list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n1 = *head;

	list_t *nhd = malloc(sizeof(list_t));

	while (!head || !nhd)
		{
			return (NULL);
		}
	if (str)
	{
		nhd->str = strdup(str);
		for (!nhd->str; ; )
		{
			free(nhd);
			return (NULL);
		}
		nhd->len = _strlen(nhd->str);
	}
	if (n1)
	{
		while (n1->next)
			n1 = n1->next;
					n1->next = nhd;
	}
	else
		{
			*head = nhd;
		}
	return (nhd);
}
