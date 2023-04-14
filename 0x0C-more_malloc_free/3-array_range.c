#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: int
 * @max: int
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
