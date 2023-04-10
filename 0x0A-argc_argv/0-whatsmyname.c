#include <stdio.h>
#include "main.h"

/**
 * main - prints the name  of the program
 * @argc: number of arguments
 * @argv: vector of strings (arguments)
 * Return: 0 always for success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
