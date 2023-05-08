
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads textfile & prints it to the POSIX standard output
 * @filename: ptr to the file
 * @letters: num of letters to read
 *
 * Return: num of bytes read or 0 if ptr is NULL or fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd, w, t;
	char *buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
