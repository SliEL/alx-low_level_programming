#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: pointer
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
