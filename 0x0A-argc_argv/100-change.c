#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - minimum number of coins to make change
 * @argc: num of args
 * @argv: array of strings
 * Return:0 or 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
