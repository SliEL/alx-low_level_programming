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
	int i;
	char *arr;

	if (size == 0)
		return (NULL);

	*arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
