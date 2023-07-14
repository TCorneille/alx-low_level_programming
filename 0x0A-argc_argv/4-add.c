#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiply
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int c, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			s = argv[a];
			for (c = 0; c < strlen(s); c++)
			{
				if (s[c] < 48 || s[c] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

