#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - .
 * @head: pointer
 * @idx: .
 * @n: .
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *w;
	unsigned int a;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);
	w->n = n;
	w->next = NULL;
	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}
	for (a = 0; p && a < idx; a++)
	{
		if (a == idx - 1)
		{
			w->next = p->next;
			p->next = w;
			return (w);
		}
		else
			p = p->next;
	}
	return (NULL);
}

