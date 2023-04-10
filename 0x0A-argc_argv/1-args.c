#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of args passed in CL
 * @argc: number of args
 * @argv: vector of strings (arguments)
 * Return: 0;
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
