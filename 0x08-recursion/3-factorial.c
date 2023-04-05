#include "main.h"
/**
 * factorial - calculates the factorial of int
 * @n: integer
 * Return: -1  if input is negative, else return fact(n)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
