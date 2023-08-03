#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * get_bit - bit value
 * @n: n
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

