#include "main.h"
/**
 *print_alphabet_x10 - print alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 0;

	for (i = 0 ; i < 10; i++)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
