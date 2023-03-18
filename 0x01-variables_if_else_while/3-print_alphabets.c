#include <stdio.h>
/**
 * main - main function
 * Return: always return 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
