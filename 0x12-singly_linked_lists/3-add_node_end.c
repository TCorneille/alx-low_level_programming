#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - new node at the end of a linked list
 * @head: pointer
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *p = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (p->next)
		p = p->next;
	p->next = n;
	return (n);
}
