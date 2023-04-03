#include "main.h"
/**
 * _strchr - locates a char in string (first occurance)
 * @s: pointer
 * @c: char
 * Return: Null or pointer to first occurance
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
