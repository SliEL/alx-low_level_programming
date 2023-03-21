#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
