#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array using malloc
 * @nmemb: integer
 * @size: integer
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);

	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
