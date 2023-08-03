#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry point.
 * @n: number.
 * Return: number.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
