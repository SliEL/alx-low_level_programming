#include <stdio.h>
/**
 * main - fibonaci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int f = 1;
	int s = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%d", f);
		}
		else if (i == 1)
		{
			printf("%d", s);
		}
		else
		{
			s += f;
			f = s - f;
			printf("%d", s);
		}
		i++;
	}
	printf("\n");
	return (0);
}
