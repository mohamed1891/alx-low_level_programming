#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point
 * @nmemb: int
 * @size: int
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* declare a pointer of type void */
	void *ptr;

	/* check if nmemb or size is 0 and return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory for the array using malloc */
	ptr = malloc(nmemb * size);

	/* check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* set the memory to zero using memset */
	memset(ptr, 0, nmemb * size);

	/* return the pointer */
	return (ptr);
}
