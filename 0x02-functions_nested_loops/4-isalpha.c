#include "main.h"

/**
 * _isalpha - is an alphabetic
 * @c: character
 * Return: 1 or 0
i */
int _isalpha(int c)
{
	int l;
	char lo, up;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (lo == 'c' || (up == 'C'))
			{
				l = 1;
			}
		}
	}
		return (l);
}
