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
	int len = 12;
	char password[len], c;

	srand((unsigned int) (time(NULL)));

	for (i = 0; i < len; i++)
	{
		c = (char) (rand() % 128);
		password[i] = c;
	}
	password[len] = '\0';

	printf("%s", password);


	return (0);
}
