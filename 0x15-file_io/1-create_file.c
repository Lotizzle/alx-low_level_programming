#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: The name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
