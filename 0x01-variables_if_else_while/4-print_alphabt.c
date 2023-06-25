#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Data Entry
 * Return: 0 succes
 */
int main(void)
{
	char le, e, q;

	e = 'e';
	q = 'q';
	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != e && le != q)
			putchar(le);
	}
	putchar('\n');
		return (0);
}
