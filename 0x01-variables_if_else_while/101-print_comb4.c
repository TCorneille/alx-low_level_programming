#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int m, n, l;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (l = n + 1; l <= '9'; l++)
			{
				if (n != m && n != l && m != l)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m == '7' && n == '8' && l == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
