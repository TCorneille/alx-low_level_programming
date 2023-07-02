#include "main.h"
/**
 * reverse_array - reverse
 * @a: array to reverse
 * @n: elements of array
 */

void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}

