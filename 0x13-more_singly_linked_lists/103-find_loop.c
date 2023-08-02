#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop -  .
 * @head: .
 *
 * Return: .
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = head;
	listint_t *t = head;

	if (!head)
		return (NULL);
	while (l && t && t->next)
	{
		t = t->next->next;
		l = l->next;
		if (t == l)
		{
			l = head;
			while (l != t)

			{
				l = l->next;
				t = t->next;
			}
			return (t);
		}
	}
	return (NULL);
}

