#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			for (k = 1 + j; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
