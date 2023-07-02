#include "main.h"
/**
 * _strcmp - compare pointers
 * @s1: string1 to compare
 * @s2: string2
 * Return: if string1 < string2 ,negative diff
 * if string1 == string2,0
 * if string1 > string2 ,positive diff
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
