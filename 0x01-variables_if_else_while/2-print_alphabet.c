#include <stdio.h>
/**
 * main - putchr exercice
 * Return: always return 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar("\n");
	return (0);
}
