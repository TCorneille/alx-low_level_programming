#include "main.h"
/**
 * puts2 - string
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;
	int m;

	while (str[n] != '\0')
	{
		n++;
	}
	for (m = 0; m < n; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
