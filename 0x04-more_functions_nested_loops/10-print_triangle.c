#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a square, followed by a new line
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j, k;
	int spaces = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = spaces; k > 0; k--)
			{
				putchar(' ');
			}

			for (j = 0; j < (i + 1) ; j++)
			{
				putchar('#');
			}
			putchar('\n');
			spaces--;
		}
	}
	else
	{
		putchar('\n');
	}
}
