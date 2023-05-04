#include "main.h"

/**
 * binary_to_uint - func that converts binary num to unsigned int
 * @b: points to str of 0s and 1s
 * Return: coverted num or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}
