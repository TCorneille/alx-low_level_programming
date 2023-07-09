#include "main.h"
/**
 * _print_rev_recursion -  reverse string ,new line
 * @s: string to print
 * Return : no
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
