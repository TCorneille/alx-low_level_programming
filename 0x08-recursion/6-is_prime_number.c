#include "main.h"
#include <stdio.h>
int _prime(int n, int s);
/**
 * is_prime_number - prime number
 * @n: number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - prime number
 * @n: number
 * @s: iteration
 * Return: result of square root of n
 */

int _prime(int n, int s)
{
	if (n <= 1)
		return (0);
	if (n % s == 0 && s > 1)
		return (0);
	if ((n / s) < s)
		return (1);
	return (_prime(n, s + 1));
}
