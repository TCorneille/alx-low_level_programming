#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - index place
 * @array: array
 * @size: elements
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

