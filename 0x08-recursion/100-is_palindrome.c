#include "main.h"
/**
 * _lens - length of string
 * @s: string
 * Return: length
 */


int _lens(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _lens(s + 1));
}
/**
 * compare - compare strings
 * @s: string
 * @t: small iterator
 * @v: big iterator
 * Return: .
 */
int compare(char *s, int t, int v)
{
	if (*(s + t) == *(s + v))
	{
		if (t == v || t == v + 1)
			return (1);
		return (0 + compare(s, t + 1, v - 1));
	}
	return (0);
}
/**
 * is_palindrome - palidrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _lens(s) - 1));
}

