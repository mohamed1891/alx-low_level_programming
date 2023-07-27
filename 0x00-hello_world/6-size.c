#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return(0);
}
