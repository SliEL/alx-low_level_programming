#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates sqrt of an intger
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds the natural sqrt of n recursively
 * @n: integer
 * @i: integer ietartor
 * Return: the sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
