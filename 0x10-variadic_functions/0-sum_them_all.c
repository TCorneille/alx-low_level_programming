#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all
 * @n: number
 * @...: variable
 * Return: if n == 0 - 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int a, s = 0;

	va_start(p, n);
	for (a = 0; a < n; a++)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}
