
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file
 * @text_content: write the file
 * Return: .
 */
int create_file(const char *filename, char *text_content)
{
	int d;
	int wr;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(d, text_content, l);
	if (d == -1 || wr == -1)
		return (-1);
	close(d);
	return (1);
}
