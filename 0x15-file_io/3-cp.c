#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates a buffer that can contain 1024 bytes
 * @file: file to paste the content copied from file_from
 *
 * Return: a pointer to the created buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFF_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: count of arguments
 * @argv: an array of pointers to the arguments passed to the program
 *
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[])
{
	int ff, ft, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	ff = open(argv[1], O_RDONLY);
	r = read(ff, buffer, BUFF_SIZE);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (ff == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(ft, buffer, r);
		if (ft == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(ff, buffer, BUFF_SIZE);
		ft = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(ff);
	close_file(ft);

	return (0);
}
