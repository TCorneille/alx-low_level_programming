#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - .
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
