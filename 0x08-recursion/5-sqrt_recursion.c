#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: result of square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n - 1));
}
/**
 * _sqrt - square root
 * @n: number
 * @s: iterate
 * Return: result of square root of n
 */

int _sqrt(int n, int s)
{
	int sqrt = s * s;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (s);
	return (_sqrt(n, s + 1));
}

