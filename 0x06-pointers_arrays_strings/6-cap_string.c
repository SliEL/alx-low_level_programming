#include "main.h"
/**
 * cap_string - cap string
 * @s: pointer
 * Return: pointer
 */
char *cap_string(char *s)
{
	int i;
	int cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
		{
			cap = 1;
		}
		else if (cap)
		{
			if (s[i] <= 122 && s[i] >= 97)
				s[i] -= 32;
			cap = 0;
		}
	}
	return (s);
}
