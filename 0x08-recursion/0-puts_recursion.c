#include "main.h"
/**
 * _puts_recursion - string ,new line
 * @s: string to print
 * Return : no
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

