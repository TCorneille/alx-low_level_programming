#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - coins change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or  1
 */
int main(int argc, char *argv[])
{
	int m, j, t;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	t = 0;
	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && m >= 0; j++)
	{
		while (m >= c[j])
		{
			t++;
			m -= c[j];
		}
	}
	printf("%d\n", t);
	return (0);
}
