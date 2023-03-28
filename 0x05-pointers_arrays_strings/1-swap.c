#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
