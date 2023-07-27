#include <stdio.h>

/**
 * main - Entry point
 * returns: Always returns 0 (success)
*/
int main (void)
{
	printf("Size of char: %d\n", sizeof(char));
	printf("Size of int: %d\n", sizeof(int));
	printf("Size of long int: %d\n", sizeof(long int));
	printf("Size of long long int: %d\n", sizeof(long long int));
	printf("Size of float: %f\n", sizeof (float));
	return 0;
}
