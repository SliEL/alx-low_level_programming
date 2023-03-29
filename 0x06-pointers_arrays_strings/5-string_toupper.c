#include "main.h"
/**
 * string_toupper - uppercase the lowercase chars of a string
 * @s: pointer
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int i;
	int slen = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
