#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers from min to max
 * @min: minimum int in array
 * @max:maximum int in array
 *
 * Return: pointer to array or null
 */

int *array_range(int min, int max)
{
	int *a;
	int i, size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = (max - min) + 1;

	/* Allocate memory for the array */
	a = malloc(sizeof(int) * size);

	/* Check if malloc failed */
	if (a == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		a[i] = min + i;
	}

	/* Return the pointer to the newly created arry */
	return (a);
}
