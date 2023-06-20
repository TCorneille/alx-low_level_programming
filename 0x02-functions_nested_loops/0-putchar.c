#include "main.h"

/**
 * main - Print "_putchar"
 * Description: including standard libraries is not allowed.
 * Return: 0
 */

int main(void)
{
	char myVar[] = "_putchar";
	int a = 0;

	while (myVar[a] != '\0')
	{
		_putchar(myVar[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
