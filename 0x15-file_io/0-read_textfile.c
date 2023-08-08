#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the text file being read
 * @letters: the number of letters it should read and print
 *
 * Return: number of letters it could read and print, 0 upon failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	int fd, r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	r = read(fd, c, letters);
	w = write(STDOUT_FILENO, c, r);

	free(c);
	close(fd);
	return (w);
}
