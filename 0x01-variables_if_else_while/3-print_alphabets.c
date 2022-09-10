#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - list the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	/* your code goes there */
	c = 'a';
	C = 'A';
	do {
		putchar(c);
		c++;
	} while (c != ('z' + 1));
	do {
		putchar(C);
		C++;
        } while (C != ('Z' + 1));
	putchar('\n');
	return (0);
}
