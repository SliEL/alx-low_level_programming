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

	while (*s != '\0')
	{
		if (s[i] == ' ' || s[i] == '	' || s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			cap = 1;
		}
		else if (cap)
		{
			s[i] -= 32;
			cap = 0;
		}
	}
	return (s);
}
