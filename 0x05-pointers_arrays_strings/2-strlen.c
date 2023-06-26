#include <stdio.h>
/**
 * _strlen - length of string
 * @str: length to get
 * Return: nothing
 */
int _strlen(char *str)
{
	size_t l = 0;

	while (*str++)
		l++;
	return (l);
}
