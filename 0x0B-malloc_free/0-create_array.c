#include "main.h"
#include <stdlib.h>
/**
 * create_array - create arrays
 * @size: size
 * @c: char in array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *n;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		n[a] = c;
	}
	return (n);
}

