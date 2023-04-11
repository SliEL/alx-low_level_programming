#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: integer
 *@c: char
 *Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
