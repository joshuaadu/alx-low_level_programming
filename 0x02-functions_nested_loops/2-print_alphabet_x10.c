#include "main.h"

/**
 * print_alphabet_x10prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int c = 'a';
	int n = 0;
	while (n < 10)
	{
		while (c < 123)
		{
			_putchar(c);
			++c;
		}
		_putchar('\n');
		++n;
	}
}

