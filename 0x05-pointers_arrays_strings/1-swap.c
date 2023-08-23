#include "main.h"

/**
 * swap_int - Entry point.
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int Val = *a;
	*a = *b;
	*b = Val;
}
