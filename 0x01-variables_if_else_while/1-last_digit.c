#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print last digit
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((i % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((i % 10) < 6) &&((i % 10) != 0)
	{
		printf("last digit is %d is less than 6 and not 0\n", n
				, n % 10);
	}
	else
	{
		printf("last digit %d and %d is 0\n", n
				, n % 10);
	}
	return (0);
}
