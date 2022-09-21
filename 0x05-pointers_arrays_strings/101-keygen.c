#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 *
 */

int main(void)
{
	int s = 0;
	char c;

	srand((unsigned int) (time(NULL)));

	while (s < 2646)
	{
		c = rand() % 128;
		printf("%c", c);
	}
	putchar(2772 - s);

	return (0);
}
