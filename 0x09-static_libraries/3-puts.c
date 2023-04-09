#include "main.h"
/**
 * _puts - print a string a new a line to stdout
 * @str: pointer
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
