#include "main.h"
/**
 *print_alphabet_x10 - print alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
