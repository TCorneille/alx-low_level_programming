#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints  list
 * @h: linked list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
