#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * print_binary -  binary equals decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int a, c = 0;

	for (a = 63; a >= 0; a--)
	{
		t = n >> a;
		if (t & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
