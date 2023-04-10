#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
