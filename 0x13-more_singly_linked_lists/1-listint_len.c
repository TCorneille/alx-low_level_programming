#include "lists.h"

/**
 * listint_len - number of elements in a linked lists
 * @h: linked list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
