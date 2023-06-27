#include "main.h"
/**
 * rev_string - modify a string into the reverse
 * @s: string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, n = 0;
	char t;

	while (s[n++])
		a++;
	for (n = a - 1; n >= a / 2; n--)
	{
		t = s[n];
		s[n] = s[a - n - 1];
		s[a - n - 1] = t;
	}
}

