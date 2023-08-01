#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  a node at the end
 * @head: pointer
 * @n: new element
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *p = *head;


	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);
	w->n = n;
	w->next = NULL;
	if (*head == NULL)
	{
		*head = w;
		return (w);
	}
	while (p->next)
		p = p->next;
	p->next = w;
	return (w);
}
