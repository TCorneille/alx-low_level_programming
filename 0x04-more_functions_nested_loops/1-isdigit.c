#include "main.h"

/**
 * _isdigit - check isdigit
 *@c: number
 * Return: 1 digit letter 0 not digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
