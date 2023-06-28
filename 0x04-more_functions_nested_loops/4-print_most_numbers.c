#include "main.h"

/**
 * print_most_numbers - 0 to 9
 * not 2 nor 4
 * Return: numbers 0 to 9
 */

void print_most_numbers(void)
{
	int c;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
