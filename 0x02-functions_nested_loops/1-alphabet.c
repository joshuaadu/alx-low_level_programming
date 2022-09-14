#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';
	while(c < 123)
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
