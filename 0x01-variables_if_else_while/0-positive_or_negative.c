#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positive or negative
 * Return: 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d positive number \n", n);
	else if (n == 0)
	{
	printf("%d zero\n", n);
	}
	else
	{
	printf("%d negative number \n", n);
	}
	return (0);
}
