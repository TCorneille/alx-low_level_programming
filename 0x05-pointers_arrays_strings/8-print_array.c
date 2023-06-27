#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements of array
 * @a: integers
 * @n: number of elements of arrays
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
				{
				printf(", ");
				}
	}
	printf("\n");
}
