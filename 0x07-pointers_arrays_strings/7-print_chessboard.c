#include "main.h"
/**
 * print_chessboard - print a chess board
 * @a: pointer
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	while (*a)
	{
		while (*a)
		{
			_putchar(*a);
			a++;
		}
		_putchar('\n');
		a++;
	}
}
