#include <stdio.h>

/**
 * swap_int - Swaps two integers
 * @a: integer1
 * @b: integer2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = *temp;
}
