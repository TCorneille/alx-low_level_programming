#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint -  .
 * @head:  .
 *
 * Return: .
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

