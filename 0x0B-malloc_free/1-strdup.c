#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *n;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	n = malloc((sizeof(char) * b + 1));
			if (n == NULL)
			return (NULL);
			while (a < b)
			{
			n[a] = str[a];
			a++;
			}
			n[a] = '\0';
			return (n);
}

