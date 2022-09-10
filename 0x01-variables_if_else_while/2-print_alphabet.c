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
	char c;

	/* your code goes there */
	c = 'a';
	do {
		putchar(c);
		c++;
	} while (c != ('z' + 1));
	putchar("\n");
	return (0);
}
