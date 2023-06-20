#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @i: int type number
 */

void print_to_98(int i)
{
	if (i <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
	}
	printf("\n");
}
