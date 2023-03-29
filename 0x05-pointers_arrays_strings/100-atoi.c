#include "main.h"
/**
 * _atoi - convert a string to number
 * @s: pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
		else if (*s == '+')
		{
			sign = 1;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + digit;
			s++;
		}
		else
		{
			s++;
			continue;
		}
	}
	return (sign * result);
}
