#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data to insert in that new node
 * Return: pointer or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);
	w->n = n;
	w->next = *head;
	*head = w;
	return (w);
}
