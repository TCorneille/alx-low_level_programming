#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * get_endianness - endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *x = (char *) &a;

	return (*x);
}
