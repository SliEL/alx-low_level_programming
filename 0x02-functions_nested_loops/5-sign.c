#include "main.h"
/**
 *print_sign - prints the sign of the arg
 *@n: int
 *Return: 1 if positive and -1 if negative and 0 otheriwse
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
