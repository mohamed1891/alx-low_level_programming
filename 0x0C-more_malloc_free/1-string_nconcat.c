#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new string or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* declare a pointer of type char */
	char *ptr;

	/* check if s1 or s2 are NULL and treat them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* allocate memory for the concatenated string */
	ptr = malloc(strlen(s1) + (n < strlen(s2) ? n : strlen(s2)) + 1);

	/* check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* copy s1 to the pointer */
	strcpy(ptr, s1);

	/* concatenate s2 to the pointer */
	strncat(ptr, s2, n);

	/* return the pointer */
	return (ptr);
}
