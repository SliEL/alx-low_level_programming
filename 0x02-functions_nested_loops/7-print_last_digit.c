#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	_putchar(ld);
	return (0);
}
