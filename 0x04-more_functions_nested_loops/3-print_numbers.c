#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: nothing
 */
void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
