#include <stdio.h>
/**
 * main - fibonaci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long f = 1;
	long s = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", f);
		}
		else if (i == 1)
		{
			printf(", %ld", s);
		}
		else
		{
			s += f;
			f = s - f;
			printf(", %ld", s);
		}
		i++;
	}
	printf("\n");
	return (0);
}
