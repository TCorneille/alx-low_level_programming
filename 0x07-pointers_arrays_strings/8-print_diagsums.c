#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry
 * @a: input
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, t, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];
	for (t = size - 1; t <= (size * size) - size; t = t + size - 1)
		sum2 = sum2 + a[t];
	printf("%d, %d\n", sum1, sum2);
}

