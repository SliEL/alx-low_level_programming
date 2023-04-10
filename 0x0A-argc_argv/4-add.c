#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * check_num - checks args if digit or not
 * @str: string
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: array of strings
 * Return: 0 0r 1
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
