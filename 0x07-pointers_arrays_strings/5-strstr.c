#include "main.h"
/**
 * _strstr - finds first occr if substring in string
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int t = 1;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
					t = 0;
					break;
			}
			if (t)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
