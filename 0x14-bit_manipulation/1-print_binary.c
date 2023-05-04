#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary rep of a num
 * @n: number
 * Return: nothing (void)
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int mask = 1 << i;
		if (n & mask)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
		{
			_putchar('0');
		}
	}

	if (count == 0)
	{
		_putchar('0');
	}
}
