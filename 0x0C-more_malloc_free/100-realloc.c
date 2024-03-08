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
	void *mem;
	char *ptr_copy;

	/**
	 * If the new size is the same as the old size, free the original pointer
	 * and allocate a new block of memory with the requested size.
	 */
	if (new_size == old_size)
	{
		free(ptr);
		return (malloc(new_size));
	}

	/* If the original pointer is NULL, simply allocate a new block of memory. */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If the new size is 0, free the original pointer and return NULL. */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate a new block of memory with the requested size. */
	if (mam == NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Copy the contents from the old block to the new block using memcpy. */
	ptr_copy = ptr;
	memcpy(mem, ptr_copy, (old_size < new_size) ? old_size : new_size);

	/* Free the original pointer. */
	free(ptr);

	/* Return the pointer to the newly created or reallocated memory block. */
	return (mem);
}
