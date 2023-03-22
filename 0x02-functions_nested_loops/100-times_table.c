#include "main.h"
/**
 * print_times_table - prints the 9 times table
 * @n: integer
 * Return: nothing
 */
void times_times_table(int n)
{
	int x, y, z, a, b, c;
	
	if (n < 0 || n > 15)
	{
		return;
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			z = x * y;
			if (z > 9)
			{
				a = z % 10;
				b = z / 10;
				_putchar(44);
				_putchar(32);
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else if (z > 99)
			{
				b = (z % 100) / 10;
				c = z % 10;
				a = z / 100;
				_putchar(44);
				_putchar(32);
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(c + '0');
			}	
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
