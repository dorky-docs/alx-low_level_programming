#include "main.h"

/**
 * create_file - this function reates a file
 * @filename: the pointer to the name of the file to create
 * @text_content: the pointer to a string to write to the file
 * Return: -1 upon function failure
 * otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
