#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: Where size is the size of the square
 * Return: If size is 0 or less, the function should print only a new line
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
