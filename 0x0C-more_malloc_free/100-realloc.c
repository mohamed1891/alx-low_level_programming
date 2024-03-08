#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    /* declare a pointer of type void */
    void *new_ptr;

    /* allocate a new memory block using malloc */
    new_ptr = malloc(new_size);

    /* check if malloc failed */
    if (new_ptr == NULL)
        return NULL;

    /* check if new size is zero and old pointer is not NULL */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    /* check if old pointer is NULL */
    if (ptr == NULL)
        return new_ptr; /* return the new pointer */

    /* copy the contents of the old memory block to the new memory block */
    for (unsigned int i = 0; i < (old_size < new_size ? old_size : new_size); i++)
    {
        /* use a casted pointer of type char to access each byte */
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    }

    /* free the old pointer */
    free(ptr);

    /* return the new pointer */
    return new_ptr;
}
