#include "main.h"

/**
 * more_numbers - 10 times of 0 to 14
 * Return: numbers 0 to 14,10 times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 0)
			{
				_putchar((b / 10) + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
