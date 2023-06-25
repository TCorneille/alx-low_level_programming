#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Data Entry
 * Return: 0 success
 */
int main(void)
{
	char le;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (le = 'a'; le <= 'f'; le++)
		putchar(le);
	putchar('\n');
	return (0);
}
