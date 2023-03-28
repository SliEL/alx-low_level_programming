#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: pointer
 * Return: nothing
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
