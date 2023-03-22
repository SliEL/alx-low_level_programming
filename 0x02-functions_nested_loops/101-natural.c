#include <stdio.h>
/**
 * main - main function
 * Return: number
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	for (i; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
