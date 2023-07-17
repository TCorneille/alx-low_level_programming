#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: character
 *Return: 0 succces 1.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
