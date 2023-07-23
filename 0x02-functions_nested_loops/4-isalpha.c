#include "main.h"

/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	int l;
	char lo, up;

	for (up = 'A'; up <= 'Z'; up++)
	{
		for (lo = 'A'; lo <= 'z'; lo++)
		{
			if (l == 'c' || (l == 'C'))
			{
				l = 1;
			}
		}
		return (l);
}
