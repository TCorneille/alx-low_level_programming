#include "main.h"
/**
 * _strcat - overwrites string
 * @dest: string to be appended
 * @src: to be appended on dest
 * @n: number from src to be appended to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src,int n)
{
	int i = 0; dest_b = 0;

	while (dest[i++])
		dest_b++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_b++] = src[i];
	return (dest);
}
