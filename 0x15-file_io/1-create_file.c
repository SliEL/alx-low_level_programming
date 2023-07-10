#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: ptr to the file
 * @text_content: the text write to the file
 *
 * Return: 1 success || -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;

		w = write(fd, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
