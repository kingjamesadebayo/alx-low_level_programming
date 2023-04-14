#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_file - create a file
 * @filename: file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 if successful -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int p, w = 0;

	if (filename == NULL)
		return (-1);

	p = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (p == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(p, text_content, strlen(text_content));
		if (w == -1)
			close(p);
		return (-1);
	}

	close(p);

	return (1);
}
