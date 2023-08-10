#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 bytes for a buffer.
 * @file: The name of the file
 * Return: .
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - .
 * @argc: arguments
 * @argv: array of pointers
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int f, t, re, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	re = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(t, buf, re);
		if (t == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		re = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buf);
	close_file(f);
	close_file(t);
	return (0);
}
