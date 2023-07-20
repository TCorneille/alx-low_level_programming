#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *s, *p = "";

	va_list t;

	va_start(t, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'a':
					printf("%s%c", p, va_arg(t, int));
					break;
				case 'b':
					printf("%s%d", p, va_arg(t, int));
					break;
				case 'c':
					printf("%s%f", p, va_arg(t, double));
					break;
				case 'd':
					s = va_arg(t, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					a++;
					continue;
			}
			p = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(t);
}

