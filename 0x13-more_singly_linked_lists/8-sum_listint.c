#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - the sum
 * @head: .
 * Return:  sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *p = head;

	while (p)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}
