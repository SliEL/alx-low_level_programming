#include "main.h"
/**
 * _strstr - finds first occr if substring in string
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
