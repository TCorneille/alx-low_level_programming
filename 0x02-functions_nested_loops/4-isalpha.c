#include "main.h"

/**
 * _isalpha - Check if character is an alphabetic character.
 * @s: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int s)
{
	if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
		return (1);
	else
		return (0);
}

