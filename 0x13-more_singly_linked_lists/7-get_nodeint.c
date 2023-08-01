#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  .
 * @head: .
 * @index: .
 *
 * Return: .
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int a = 0;

	while (p && a < index)
	{
		p = p->next;
		a++;
	}
	return (p ? p : NULL);
}
