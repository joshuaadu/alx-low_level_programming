#include "main.h"

#define COUNTER 0
#define ALPHASTART 'a'
/**
 * print_alphabet_x10prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	while (COUNTER < 10)
	{
		while (ALPHASTART < '123')
		{
			_putchar(ALPHSTART);
			++ALPHASTART;
		}
		_putchar('\n');
	}
}

