#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return 0
 */

void print_alphabet_x10(void)
{
	char s;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
