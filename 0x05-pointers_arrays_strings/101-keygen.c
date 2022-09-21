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
	int i = 0;
	int len = (rand() % 6) + 8;
	char c;

	srand((unsigned int) (time(NULL)));

	for (i = 0; i < len; i++)
	{
		c = (char) (rand() % 128);
		printf("%c", c);
	}

	return (0);
}
