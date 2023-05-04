#include "main.h"

/**
 * print_binary - prints the binary rep of a num
 * @n: number
 * Return: nothing (void)
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		mask >>= 1;
	}
}
