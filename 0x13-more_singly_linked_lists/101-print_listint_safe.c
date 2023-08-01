#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - .
 * @head: .
 * Return: .
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t d = 1;
	const listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				d++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				d++;
				t = t->next;
			}
			return (d);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - .
 * @head: ..
 * Return: .
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t d, x = 0;

	d = looped_listint_len(head);
	if (d == 0)
	{
		for (; head != NULL; d++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0; x < d; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (d);
}
