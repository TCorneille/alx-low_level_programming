#include <stdlib.h>
#include "main.h"
/**
 * argstostr - .
 * @ac: int
 * @av: pointer array
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			d++;
	}
	d += ac;
	s = malloc(sizeof(char) * d + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[i][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		if (s[c] == '\0')
		{
			s[c++] = '\n';
		}
	}
	return (s);
}
