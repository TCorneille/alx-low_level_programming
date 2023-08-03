#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * flip_bits - counts  bits
 * @n: number1
 * @m: number2
 * Return: .
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int t;
	unsigned long int s = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		t = s >> a;
		if (t & 1)
			c++;
	}
	return (c);
}
