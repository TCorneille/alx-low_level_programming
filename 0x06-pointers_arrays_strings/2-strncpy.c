#include "main.h"
/**
 * _strncpy - copy
 * @dest: string copy
 * @src: source string
 * @n: max number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_b = 0;

	while (src[i++])
		src_b++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_b; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
