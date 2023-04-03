#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonals
 * @a: pointer
 * @size: integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
		}
	}

	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (i == j)
				sum2 += a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
