#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - main function
 * Return: always return 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;
	if (last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if (last_digit > 0 && last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	else if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	return (0);
}
