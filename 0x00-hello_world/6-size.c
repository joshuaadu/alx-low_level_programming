#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte (s)", (unsigned long) sizeof(c));
	printf("Size of a int: %d byte (s)", (unsigned long) sizeof(i));
	printf("Size of a long int: %d byte (s)", (unsigned long) sizeof(li));
	printf("Size of a long long int: %d byte (s)", (unsigned long) sizeof(lli));
	printf("Size of a float: %d byte (s)", (unsigned long) sizeof(f));
	
	return(0)
}
