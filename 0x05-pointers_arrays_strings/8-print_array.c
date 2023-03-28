#include "main.h"
/**
 * print_array - print array
 * @a: pointer
 * @n: integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", str[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
