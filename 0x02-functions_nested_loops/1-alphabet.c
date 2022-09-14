#include "main.h"

#define ALPHASTART 'a'
void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	while(ALPHASTART < 123)
	{
		_putchar(ALPHASTART);
		++ALPHASTART;
	}
	_putchar('\n');
}
