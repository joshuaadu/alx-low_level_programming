#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: If n is 0 or less, the function should only print a \n
 *
 */

void print_diagonal(int n)
{
	int s = 0;
	int c;

	if (n > 0)
	{
		while (n > 0)
		{
			c = s;
			while (c > 0)
			{
				putchar(' ');
				c--;
			}
			putchar('\\');
			putchar('\n');
			s++;
			n--;
		}
	}
	else
	{
		putchar('\n');
	}
}
