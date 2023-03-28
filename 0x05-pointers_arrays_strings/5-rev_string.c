#include "main.h"
/**
 * rev_string  - reverse a string
 * @s: pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	char *e = s;
	char temp;

	/* set e to point on the last char of the string */
	while (*e != '\0')
		e++;
	e--;

	/* swap chars using the temp variable */
	while (e >= s)
	{
		temp = *e;
		*e = *s;
		*s = temp;
		s++;
		e--;
	}
}
