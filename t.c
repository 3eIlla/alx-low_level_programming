#include "stdio.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i; listint_t *ptr;
if (head == NULL)
return (NULL);

ptr = head;
i = 0;
while (i < index)
{
	ptr = ptr->next;
i++;
}
return (ptr);
}