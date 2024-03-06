#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: int
*/

int *array_range(int min, int max)
{
    /* declare a pointer of type int */
    int *ptr;

    /* check if min > max and return NULL */
    if (min > max)
        return NULL;

    /* allocate memory for the array using malloc */
    ptr = malloc((max - min + 1) * sizeof(int));

    /* check if malloc failed */
    if (ptr == NULL)
        return NULL;

    /* fill the array with the values from min to max */
    for (int i = 0; i <= max - min; i++)
    {
        ptr[i] = min + i;
    }

    /* return the pointer */
    return ptr;
}
