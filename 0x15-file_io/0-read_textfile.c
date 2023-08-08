#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads the text from a file and prints to stdout.
 * @filename: name of the text file to read.
 * @letters: number of letters to read and print.
 *
 * Return: actual number of bytes read and printed or
 * 0 if the function fails or filename is null.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
