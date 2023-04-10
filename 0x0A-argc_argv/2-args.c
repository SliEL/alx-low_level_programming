#include <stdio.h>
#include "main.h"
/**
 * main - prints all args followed by a new line
 * @argc: number of args
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
