#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings
 * @separator: The string
 * @n: number
 * @...: A variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list t;
	char *s;
	unsigned int a;

	va_start(t, n);

	for (a = 0; a < n; a++)

	{
		s = va_arg(t, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(t);
}
