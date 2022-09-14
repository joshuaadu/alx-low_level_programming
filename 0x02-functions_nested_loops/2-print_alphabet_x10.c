#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int c = 'a';

		while (c < 123)
		{
			_putchar(c);
			++c;
		}
		++n;
		_putchar('\n');
	}
}

