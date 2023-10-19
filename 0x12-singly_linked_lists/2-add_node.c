#include "lists.h"

/**
 * add_node - add node 2 start o list
 *
 * @head: address o pointer
 * @str:  node str field
 *
 * Return: size o list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nhd = malloc(sizeof(list_t));

	while (!head || !nhd)
	{
		return (NULL);
	}

	if (str)
	{
		for (nhd->str = strdup(str); !nhd->str; )
		{
			free(nhd);
			return (NULL);
		}
		nhd->len = _strlen(nhd->str);
	}
	nhd->next = *head;
			*head = nhd;
	return (nhd);
}
