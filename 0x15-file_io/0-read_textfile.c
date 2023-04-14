#include "main.h"
#include <stdio.h>

/**
 * read_textfile - read text file and print it to the POSIX STDOUT
 * @filename: text file being read
 * @letters: num of letters to read
 *
 * Return: 0 if the file can't open or read, filename is NULL, write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t jam;
	ssize_t x;
	ssize_t y;

	jam = open(filename, O_RDONLY);
	if (jam == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(jam, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(jam);
	return (x);
}
