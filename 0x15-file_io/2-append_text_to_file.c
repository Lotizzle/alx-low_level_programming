#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The text to append to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, i);

	if (i == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
