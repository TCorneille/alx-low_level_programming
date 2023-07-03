#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s: string to change
 * Return: pointer to change
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}

