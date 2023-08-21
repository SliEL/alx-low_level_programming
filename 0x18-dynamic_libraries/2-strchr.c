#include "main.h"
/**
 * _strchr - locates a char in string (first occurance)
 * @s: pointer
 * @c: char
 * Return: Null or pointer to first occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
