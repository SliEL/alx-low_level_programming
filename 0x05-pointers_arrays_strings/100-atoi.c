#include "main.h"
#include <limits.h>
/**
 * _atoi - convert a string to number
 * @s: pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;
	int max_div_10 = INT_MAX / 10;

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
			if (result > max_div_10 || (result == max_div_10 && digit >= 8))
			{
				return sign = 1 ? INT_MAX : INT_MIN;
			}
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
