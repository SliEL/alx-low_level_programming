#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append txt to file
 * @filename: ptr to file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd = -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;

		w = write(filename, text_content, len);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
