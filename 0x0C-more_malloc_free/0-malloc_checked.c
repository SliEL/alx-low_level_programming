#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
