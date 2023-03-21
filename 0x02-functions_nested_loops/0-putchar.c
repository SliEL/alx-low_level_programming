#include "main.c"
/**
 * main - print _putchar
 *Return: always 0 for success
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
