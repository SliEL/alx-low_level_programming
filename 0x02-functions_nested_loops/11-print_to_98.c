#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers up to 98
 * @n: ineteger
 * Return: 0
 */
int print_to_98(int n)
{       
	int i;
        
	if (n == 98)
	{       
		printf("%d", n);
		printf("\n");
		return (0);
	}       
	else if (n > 98)
	{       
		for (i = n; i >= 98; i--)
		{       
			printf("%d", n);
			if (n != 98)
			{       
				printf(", ");
			}       
		}
	  	printf("\n");	
		return (0);
	}
	else
	{
		for (i = n; i <= 98; i++)
		{       
			printf("%d", n);
			if (n != 98)
			{       
				printf(", ");
			}       
		}
		printf("\n");
		return (0);
	}
}
