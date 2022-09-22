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
	int i = 0, c = 0;

	srand((unsigned int) (time(NULL)));

	while (c < 2772)
	{
		i = rand() % 128;
		if ((c + i) > 2772)
			break;
		c = c + i
		printf("%c", i);
	}

	printf("%c\n", (27772 - c));

	return (0);
}
