#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - alphabets
 * return 0 success
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz"
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar(\n);
	return (0);
}
