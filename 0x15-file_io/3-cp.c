#include "main.h"

/**
 * create_buff -1024 bytes Allocation for buffer.
 * @file:name off file buffer storing chars for.
 *
 * Return: pointer to the new allocated buffer.
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - it closes the file descriptor.
 * @fd:file descriptor to be closed.
 */

void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - it copie contents of a file to another.
 * @argc: number of arguments given to program.
 * @argv: array of pointers to arguments.
 *
 * Return: (0) on success.
 *
 * Description: 1-argument count is incorrect-exit code 97.
 * 2-file_from doesn't exist, can't be read - exit code 98.
 * 3-file_to can't be created, written to - exit code 99.
 * 4-file_from file_to can't be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

		} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
