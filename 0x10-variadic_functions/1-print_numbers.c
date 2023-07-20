#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string
 * @n: number
 * @...: variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int a;

	va_start(p, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(p, int));
		if (a != (n - 1)  && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
