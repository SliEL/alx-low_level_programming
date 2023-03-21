#include "main.h"
/**
 *print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
