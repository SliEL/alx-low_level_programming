#include "main.h"
/**
 * add - sum of two numbers
 * @n: integer
 * @m: integer
 * Return: sum
 */
int add(int n, int m)
{
	int sum = n + m;
	int digits[10];
	int i = 0, j;

	if (sum == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	while (sum != 0)
	{
		digits[0] = sum % 10;
		sum /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}
	_putchar('\n');
	return (0);
}

