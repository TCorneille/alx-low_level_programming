#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main - Data Entry
* Return 0 succes
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
