#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - .
 * @head: .
 * @index: .
 * Return: .
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = NULL;
	listint_t *p = *head;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (a < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		a++;
	}
	c = p->next;
	p->next = c->next;
	free(c);
	return (1);
}

