#include "main.h"

/**
 * main - Putchar
 * Description:
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char v[] = "_putchar";

	while (v[a] != '\0')
	{
		_putchar(v[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
