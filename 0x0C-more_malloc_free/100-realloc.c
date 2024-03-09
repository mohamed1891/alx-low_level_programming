#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	/**
	 * If the new size is 0 and the original pointer is not NULL,
	 * free the original pointer and return NULL.
	 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* If the original pointer is NULL, simply allocate a new block of memory. */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/*If the new size is the same as the old size, return the original pointer.*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* Allocate a new block of memory with the requested size.*/
	new_ptr = malloc(new_size);
	/* Check if malloc failed */
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* Copy the contents from the old block to the new block using memcpy. */
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	/* Free the original pointer */
	free(ptr);
	/* Return the pointer to the newly created or reallocated memory block. */
	return (new_ptr);
}
