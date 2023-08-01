#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: .
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int m;

	if (!head || !*head)
		return (0);
	m = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (m);
}
