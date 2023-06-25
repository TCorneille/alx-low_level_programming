#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Data Entry(reverse)
 * Return:0 success
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	putchar(le);
	putchar('\n');
	return (0);
}
