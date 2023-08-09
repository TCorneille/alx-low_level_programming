#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: file
 * @letters: letters
 * Return: write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	ssize_t t;
	char *f;
	ssize_t d;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	f = malloc(sizeof(char) * letters);
	n = read(d, f, letters);
	t = write(STDOUT_FILENO, f, n);
	free(f);
	close(d);
	return (t);
}

