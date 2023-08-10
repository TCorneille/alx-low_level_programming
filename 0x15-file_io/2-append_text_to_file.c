#include "main.h"

/**
 * append_text_to_file - Appends text to the file.
 * @filename: .
 * @text_content: .
 * Return:  NULL or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
