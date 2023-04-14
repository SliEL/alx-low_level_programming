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
	void *ptr;

	ptr = malloc(nmemb * size);

	if (!ptr || nmemb == 0 || size == 0)
		return (NULL);

	return (ptr);
}
