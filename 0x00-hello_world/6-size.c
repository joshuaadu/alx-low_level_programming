#include <stdio.h>

int main(void)
{
        int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %s byte (s)", (unsigned long) sizeof(c));
	printf("Size of a int: %s byte (s)", (unsigned long) sizeof(i));
	printf("Size of a long int: %s byte (s)", (unsigned long) sizeof(li));
	printf("Size of a long long int: %s byte (s)", (unsigned long) sizeof(lli));
	printf("Size of a float: %s byte (s)", (unsigned long) sizeof(f));
	
	return(0)
}

