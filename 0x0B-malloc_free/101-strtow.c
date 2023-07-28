#include "main.h"
#include <stdlib.h>
/**
* count_word - to count the number of words in a string
* @s: string
 * Return: number of words
*/
int count_word(char *s)
{
	int g, c, d;

	g = 0;
	d = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			g = 0;
		else if (g == 0)
		{
			g = 1;
			d++;
		}
	}
	return (d);
}
/**
 * strtow - splits a string
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **ma, *p;
	int a, b = 0, len = 0, word, c = 0, start, end;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);
	ma = (char **) malloc(sizeof(char *) * (word + 1));
	if (ma == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				p = (char *) malloc(sizeof(char) * (c + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
					*p++ = str[start++];
				*p = '\0';
				ma[b] = p - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	ma[b] = NULL;
	return (ma);
}

