#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer
 * Return: pointer
 */
char *leet(char *s)
{
	int i, j;
	char letters[10] = "aAeEoOtTlL";
	char digits[5] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = digits[j / 2];
		}
	}
	return (s);
}
