#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Alphabets
 * Return: 0 (success)
 */

int main(void)
{
	 char le;

	for (le = 'a'; le <= 'z'; le++)
		putchar (le);
	for  (le = 'A'; le <= 'Z'; le++)
		putchar (le);
	putchar('\n');

	return (0);
}
