#include "main.h"
/**
 * puts_half - half of string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int m;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		m = (n - 1) / 2;
		m += 1;
	}
	else
	{
		m = n / 2;
	}
	for (; m < n; m++)
	{
		putchar(str[m]);
	}
	putchar('\n');
}
