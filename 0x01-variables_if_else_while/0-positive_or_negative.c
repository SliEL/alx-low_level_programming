#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - main function
 *Return: always return 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a == 0)
		printf("The number is zero");
	else if (a > 0)
		printf("The number is positive");
	else 
		printf("The number is negative");
	return (0);
}
