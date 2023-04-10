#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to int
 * @str: pointer
 * Return: int
 */

int _atoi(const char *str)
{
	int sign = 1;
	int result = 0;

	while (*str == ' ')
	{
		str++;
	}


	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -1;
		}

		str++;
	}


	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (sign * result);
}


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
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
