#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: int
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
    /* allocate memory using malloc */
    void *ptr = malloc(b);

    /* check if malloc failed */
    if (ptr == NULL)
    {
        /* exit with status value 98 */
        exit(98);
    }

    /* return the pointer */
    return ptr;
}
